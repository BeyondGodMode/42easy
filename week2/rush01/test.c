#include <unistd.h>
#include <stdio.h>

#define SIZE 4

void printGrid(int grid[SIZE][SIZE]) {
    char buffer[2];
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            buffer[0] = grid[i][j] + '0';
            buffer[1] = ' ';
            write(STDOUT_FILENO, buffer, 2);
        }
        write(STDOUT_FILENO, "\n", 1);
    }
    write(STDOUT_FILENO, "\n", 1);
}

int isSafe(int grid[SIZE][SIZE], int row, int col, int num) {
    // Check if the number is safe to place in the given position
    // (Assuming row and col are within the grid boundaries)

    // Check for conflicts in the row
    for (int i = 0; i < SIZE; i++) {
        if (grid[row][i] == num)
            return 0;
    }

    // Check for conflicts in the column
    for (int i = 0; i < SIZE; i++) {
        if (grid[i][col] == num)
            return 0;
    }

    return 1;
}

int solveSkyscraperUtil(int grid[SIZE][SIZE], int clues[SIZE][4], int row, int col) {
    // Base case: All positions are filled
    if (row >= SIZE) {
        printGrid(grid);
        return 1;
    }

    // Check if the current position is already filled
    if (grid[row][col] != 0) {
        if (col < SIZE - 1)
            return solveSkyscraperUtil(grid, clues, row, col + 1);
        else
            return solveSkyscraperUtil(grid, clues, row + 1, 0);
    }

    // Recursive case: Try placing numbers in the current position
    int totalSolutions = 0;
    for (int num = 1; num <= SIZE; num++) {
        if (isSafe(grid, row, col, num)) {
            grid[row][col] = num;

            // Check if the current configuration violates the clues
            int valid = 1;
            if (row == 0 && clues[row][col] != 0 && num > clues[row][col])
                valid = 0;
            if (col == SIZE - 1 && clues[1][col] != 0 && num > clues[1][col])
                valid = 0;
            if (row == SIZE - 1 && clues[2][SIZE - col - 1] != 0 && num > clues[2][SIZE - col - 1])
                valid = 0;
            if (col == 0 && clues[3][row] != 0 && num > clues[3][row])
                valid = 0;

            if (valid) {
                if (col < SIZE - 1)
                    totalSolutions += solveSkyscraperUtil(grid, clues, row, col + 1);
                else
                    totalSolutions += solveSkyscraperUtil(grid, clues, row + 1, 0);
            }

            grid[row][col] = 0;  // Backtrack: Remove the number
        }
    }

    return totalSolutions;
}

int solveSkyscraper(int clues[SIZE][4]) {
    int grid[SIZE][SIZE] = {0};

    int totalSolutions = solveSkyscraperUtil(grid, clues, 0, 0);

    return totalSolutions;
}

int main() {
    int clues[SIZE][4] = {
        {4, 2, 2, 1},
        {1, 2, 3, 3},
        {4, 2, 2, 1},
        {1, 2, 3, 3}
    };

    int totalSolutions = solveSkyscraper(clues);

    char buffer[32];
    int len = sprintf(buffer, "Total solutions: %d\n", totalSolutions);
    write(STDOUT_FILENO, buffer, len);

    return 0;
}
