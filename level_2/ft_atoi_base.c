
int ft_atoi_base(const char *str, int str_base)
{
    int i = 0;
    int res = 0;
    int sign = 1;
    int digit;

    while (str[i] > 9 && str[i] < 13)
        i++;
    if (str[i] == '-')
        sign = -1;
    if (str[i] == '+'|| str[i] == '-')
         i++;
    while (str[i])
    {
        digit = 0;

        if (str[i] >= '0' && str[i] <= '9')
            digit = str[i] - '0';
        else if (str[i] >= 'a' && str[i] <= 'f')
            digit = str[i] - 'a' + 10;
        else if (str[i] >= 'A' && str[i] <= 'F')
            digit = str[i] - 'A' + 10;
        else
            break;
        if (digit >= str_base)
            break;
        res = res * str_base + digit;
        i++;
    }
    return res * sign;
}