#include <stdio.h>
#include <stdlib.h>

char **create1(int n);
void create2(char **strPtr, int n);
void fill(char **strPtr, int n);

int main()
{
    int n, i;
    char **strPtr;

    scanf("%d", &n);
    strPtr = create1(n * 2 + 1);
    create2(strPtr, n * 2 + 1);
    fill(strPtr, n);

    for (i = 0; i < 2 * n + 1; i++)
    {
        printf("%s\n", strPtr[i]);
    }

    for (i = 0; i < n * 2 + 1; i++)
        free(strPtr[i]);
    free(strPtr);

    return 0;
}

char **create1(int n)
{
    char **str = (char **)malloc(sizeof(char *) * n);
    return str;
}

void create2(char **strPtr, int n)
{
    for (int i = 0; i < n; i++)
    {
        *(strPtr + i) = (char *)malloc(sizeof(char) * (n + 1));
    }
}

void fill(char **strPtr, int n)
{
    if (n == 0)
    {
        strPtr[0][0] = 'X';
        return;
    }

    for (int i = 0; i < n; i++)
        strPtr[0][i] = ' ';
    strPtr[0][n] = 'X';
    strPtr[0][n + 1] = '\0';
    int i;
    for (i = 1; i < n; i++)
    {
        int j;
        for (j = 0; j < n - i; j++)
            strPtr[i][j] = ' ';
        strPtr[i][j] = '/';
        j++;
        for (; j <= n + i - 1; j++)
            strPtr[i][j] = ' ';
        strPtr[i][j] = '\\';
        strPtr[i][j + 1] = '\0';
    }
    strPtr[i][0] = 'X';
    int j;
    for (j = 1; j < 2 * n; j++)
        strPtr[i][j] = ' ';
    strPtr[i][j] = 'X';
    strPtr[i][j + 1] = '\0';
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= n + i + 1; j++)
        {
            strPtr[2 * n - i][j] = strPtr[i][j];
        }
        strPtr[2 * n - i][n - i] = '\\';
        strPtr[2 * n - i][n + i] = '/';
    }
    for (int j = 0; j <= n + 1; j++)
        strPtr[2 * n][j] = strPtr[0][j];
}