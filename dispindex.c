#include <stdio.h>

int main(int argc, char *argv[])
{
    int i=0;

    printf("Command-line arguments with index:\n");

    while(i < argc)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
        i++;
    }

    return 0;
}
