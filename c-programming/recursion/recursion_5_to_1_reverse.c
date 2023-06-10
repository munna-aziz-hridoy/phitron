#include <stdio.h>

void print_5_to_1(int x)
{

    if (x > 5)
    {
        return;
    }

    print_5_to_1(x + 1);

    printf("%d\n", x);
}

int main()
{

    print_5_to_1(1);

    return 0;
};
