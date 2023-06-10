#include <stdio.h>
#include <string.h>
int main()
{
    char line[1001];

    int c = 0, s = 0, sp = 0;

    fgets(line, 1000, stdin);

    for (int i = 0; i < strlen(line); i++)
    {
        if (line[i] >= 'A' && line[i] <= 'Z')

        {
            c++;
        }
        else if (line[i] >= 'a' && line[i] <= 'z')
        {
            s++;
        }
        else if (line[i] == 32)
        {
            sp++;
        }
    }

    printf("Capital - %d\n", c);
    printf("Small - %d\n", s);
    printf("Spaces - %d", sp);

    return 0;
};