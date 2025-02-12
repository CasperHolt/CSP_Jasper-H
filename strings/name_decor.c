// Jasper Holt, name decor c
#include <stdio.h>
#include <string.h>
char one[] = ">>>--";
char two[] = "---->";
char name[10];

int main(void){
printf("what is your first name\n");
scanf("%s",name);
    
strcat(one,name);
strcat(one,two);
printf("%s\n",one);
   
    return 0;
}