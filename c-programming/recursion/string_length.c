#include <stdio.h>

int string_length(char s[], int i);

int main()
{

    char a[100];

    scanf("%s", a);

    int length = string_length(a, 0);

    printf("%d", length);

    return 0;
};

int string_length(char s[], int i)
{

    if (s[i] == '\0')
    {
        return 0;
    }

    int l = string_length(s, i + 1);

    return l + 1;
}
