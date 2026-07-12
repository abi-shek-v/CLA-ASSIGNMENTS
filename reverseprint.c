#include <stdio.h>

int main(int argc, char *argv[])
{
    int i;

    printf("Command-line arguments with index:\n");

    for (i = argc -1; i >= 0; i--)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    return 0;
}
