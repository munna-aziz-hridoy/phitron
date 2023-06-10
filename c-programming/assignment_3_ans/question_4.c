#include <stdio.h>
#include <string.h>

int is_palindrome(char *str)
{
    int i = 0, j = strlen(str) - 1;
    int palindrome = 1;

    while (i < j)
    {
        if (*(str + i) != *(str + j))
        {
            return palindrome = 0;
        }

        i++;
        j--;
    }

    return palindrome;
};

int main()
{

    char str[100];
    scanf("%s", str);

    int ip = is_palindrome(str);
    if (ip == 1)
    {
        printf("Palindrome");
    }
    else if (ip == 0)
    {
        printf("Not Palindrome");
    }

    return 0;
};