// Jasper Holt, strings  notes c
#include <stdio.h>
#include <string.h>
char subject[50];
char name[]="jasper";
char sentence[]= "ythe quick brown fox jumps over the lazy dog.";

int main(void){
   //printf("what class are you in:\n");
   //scanf("%s", subject);
   //fgets(subject, sizeof(subject), stdin);
   //printf("you are in %s,thats a cool class",subject);
   //name[0]='T';
   //name[1]='o';
  // name[2]='r';
   //name[3]='i';
   //name[0]='C';
   //printf("%s", name);
   //intf("%lu\n",sizeof(sentence));
   //intf("%d\n",strlen(sentence));
char one[] ="hello";
char two[]= "world";
char three[]="welcome to my program";
printf("%s\n",one);
strcat(one, two);
printf("%s\n",one);
strcat(three,one);
    return 0; 
}