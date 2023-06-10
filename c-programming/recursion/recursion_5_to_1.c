#include <stdio.h>

void print_5_to_1(int x);

int main()
{
    print_5_to_1(5);
    return 0;
};

void print_5_to_1(int x)
{
    if (x == 0)
    {
        return;
    }

    printf("%d\n", x);

    print_5_to_1(x - 1);
}