#include <stdio.h>
#include <stdlib.h>

void ft_prime(int number)
{
    int prime = 2;

    if (number == 1)
    {
        printf("1");
        return;
    }
    while (prime <= number)
    {
        if (number % prime == 0)
        {
            printf("%d", prime);
            if (number != prime)
                printf("*");
            number /= prime;
        }
        else
            prime++; 
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        ft_prime(atoi(argv[1]));
    printf("\n");
    return (0);
}
