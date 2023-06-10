#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    scanf("%s", a);

    int vol = 0;

    for (int i = 0; i < strlen(a); i++)
    {

        if (a[i] == 97 || a[i] == 101 || a[i] == 105 || a[i] == 111 || a[i] == 117)
        {
            vol++;
        }
    }

    printf("%d", vol);

    return 0;
};