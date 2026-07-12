#include<stdio.h>
int main(int argc, char*argv[]){
printf("Total Arguments:%d\n",argc);
printf("Command line Arguments:\n");
for (int i = 0; i < argc; i++){
printf("argv[%d] = %s\n",i,argv[i]);
}
return 0;
}

