#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{

    if (argc == 0)
    {
        exit(1);
    }

    if (*argv[0] <= 0 || *argv == NULL)
    {
        exit(1);
    }

 int n = atoi(argv[1]);
int x = atoi(argv[2]);
int m = atoi(argv[3]);
int b = atoi(argv[4]);

    printf("%i", x);

    int i = x;
    while (n > 1)
    {
        i = i * m + b;
        printf("%i", i);
        n--;
    }
    return 0;
}

