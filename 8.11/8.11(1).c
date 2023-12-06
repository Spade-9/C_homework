int is_prime(int n)
{
    if (n == 1)
        return 1;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}
void printFactor(int x, int y)
{
    if (y == 1)
        printf("%d=", x);
    if (is_prime(x))
    {
        printf("%d\n", x);
        return;
    }
    else
    {
        for (int i = 2; i * i <= x; i++)
        {
            if (is_prime(i) && x % i == 0)
            {
                printf("%d*", i);
                printFactor(x / i, 0);
                break;
            }
        }
    }
}