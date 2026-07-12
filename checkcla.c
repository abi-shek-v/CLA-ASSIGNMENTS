#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("No command-line arguments were provided.\n");
    }
    else
    {
        printf("Command-line arguments were provided.\n");
    }

    return 0;
}
