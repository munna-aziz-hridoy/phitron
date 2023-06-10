#include <stdio.h>
#include <string.h>

int main()
{

    char str[1000];

    scanf("%s", str);

    int n = strlen(str);

    int cnt[26] = {0};

    for (int i = 0; i < n; i++)
    {
        cnt[str[i] - 97]++;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 97, cnt[i]);
    }

    return 0;
};