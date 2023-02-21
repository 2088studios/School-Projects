#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#Sequence where next value in sequence is computed as x_n = m*x_0 + b

int main(int argc, char **argv)
{

    if (argc == 0)
    {
        exit(1);
    }

#non-zero positive number of values in the sequence
int n = atoi(argv[1]);
    
if (n <= 0)
    {
        exit(1);
    }
    
#an integer and is the first value in the sequence
int x = atoi(argv[2]);

#integer and is used as a multiplier of the previous term in the sequence
int m = atoi(argv[3]);

#an integer and is added to the (m*previous) term
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

