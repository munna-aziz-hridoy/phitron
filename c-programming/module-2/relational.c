#include <stdio.h>
#include <stdbool.h>

char *formatBool(bool num);

int main()
{

    int a, b, c, d;

    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);

    bool is_true = a >= b && c == d;

    printf("%s", formatBool(is_true));

    return 0;
}

char *formatBool(bool num)
{

    char *is_true;

    is_true = num != 0 ? "true" : "false";

    return is_true;
}