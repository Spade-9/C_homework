#include <stdio.h>

void printFactor(int, int);

int main()
{
    int a, b, i;

    scanf("%d%d", &a, &b);
    for (i = a; i <= b; i++)
        printFactor(i, 1);

    return 0;
}

isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void printFactor(int n, int last_prime)
{
    if (last_prime == 1)
    {
        printf("%d=", n);
        last_prime = 2;
    }
    if (isPrime(n) == 0)
    {
        int i;
        for (i = last_prime; i < n; i++)
        {
            if (n % i == 0)
            {
                if (i == last_prime)
                {
                    printf("%d*", last_prime);
                    break;
                }
                else
                {
                    if (isPrime(i) == 1)
                    {
                        printf("%d*", i);
                        last_prime = i;
                        break;
                    }
                    else
                        continue;
                }
            }
        }
        printFactor(n / i, last_prime);
    }
    else
        printf("%d\n", n);
}
