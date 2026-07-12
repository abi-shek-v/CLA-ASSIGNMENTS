#include <stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
    int i;

    printf(" length of Command-line arguments with index:\n");

    for (i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s length = %lu\n", i, argv[i],strlen(argv[i]));
    }

    return 0;
}
