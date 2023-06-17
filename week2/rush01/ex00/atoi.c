int atoi(const char *str) 
{
	int result = 0;
	int sign = 1;
	int i = 0;

    // Check for a leading sign
	if (str[0] == '-') {
		sign = -1;
		i = 1;
	} else if (str[0] == '+')
	{
		i = 1;
	}

    while (str[i] != '\0') {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 10 + (str[i] - '0');
            i++;
        } else {
            // Invalid character encountered, break the loop
            break;
        }
    }

    return sign * result;
}