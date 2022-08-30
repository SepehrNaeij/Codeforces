#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    int n, t;
    scanf("%d%d", &n, &t);
    getchar();
    char s[n + 1];
    gets(s);
    while (t--)
    {
        for (int i = 0; i < strlen(s) - 1; i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                s[i] = 'G';
                s[i + 1] = 'B';
                i++;
            }
        }
    }
    printf("%s\n", s);

    return 0;
}