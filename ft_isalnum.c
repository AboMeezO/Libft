int ft_isalnum(int c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
        return (1);
    return (0);
}

/*
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 2)
        return (1);
    if (isalnum(argv[1][0]))
        printf("The character is alphanumeric.\n");
    else
        printf("The character is not alphanumeric.\n");
    return (0);
}
*/