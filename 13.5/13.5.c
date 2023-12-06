#include <stdio.h>

#define MAX 48

int getScore(char *s);

int main()
{
    char input[MAX];
    int score;

    scanf("%s", input);
    score = getScore(input);
    printf("%d\n", score);

    return 0;
}

int getScore(char *s)
{
    int score = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        switch (s[i])
        {
        case 'W':
            score += 3;
            break;
        case 'D':
            score += 1;
            break;
        case 'L':
            break;
        }
    }
    return score;
}