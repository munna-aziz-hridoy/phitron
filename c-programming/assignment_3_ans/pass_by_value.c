#include <stdio.h>

void pass_by_ref(int *x)
{
    *x = 100;
    printf("%d\n", *x);
}

int main()
{
    int x = 50;
    pass_by_ref(&x);
    printf("%d\n", x);
    return 0;
};