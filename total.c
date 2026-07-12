#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i;
    int total = 0;

    for (i = 1; i < argc; i++)
    {
        total = total + strlen(argv[i]);
    }

    printf("Total number of characters = %d\n", total);

    return 0;
}
