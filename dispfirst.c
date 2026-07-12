#include <stdio.h>

int main(int argc, char *argv[])
{
if (argc > 1){
    printf("First command-line arguments: %s\n", argv[1]);
}
else{
printf("No command\n");
}
    return 0;
}
