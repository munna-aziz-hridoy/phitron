#include <stdio.h>

void print_1_to_5(int x);

int main()
{

    print_1_to_5(1);

    return 0;
};

void print_1_to_5(int x)
{

    if (x > 5)
    {
        return;
    }

    printf("%d\n", x);

    print_1_to_5(x + 1);
}