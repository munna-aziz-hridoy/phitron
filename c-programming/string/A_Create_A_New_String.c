#include <stdio.h>
#include <string.h>
int main()
{

    char a[1000];
    char b[1000];

    scanf("%s %s", a, b);

    int aLen = strlen(a);
    int bLen = strlen(b);

    printf("%d %d\n", aLen, bLen);
    printf("%s %s", a, b);

    return 0;
};