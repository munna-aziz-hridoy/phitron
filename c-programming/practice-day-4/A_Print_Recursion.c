#include <stdio.h>

void print_recursion(int n);

int main()
{

    int n;
    scanf("%d", &n);

    print_recursion(n);

    return 0;
};

void print_recursion(int n)
{

    if (n == 0)
    {
        return;
    }

    printf("I love Recursion\n");
    print_recursion(n - 1);
}