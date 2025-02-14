// Jasper Holt, silly senteces
#include <stdio.h>
// emptey variables for 3 words
char color[10];
char damage[20];
char monster[20];
char tall[10];
int main(void){
//welcome or intriduction(print)
printf ("welcome pleas aswere the folowing questions with one word\n");
//ask user for words(pritn statement with a quaestion scanf to set to varable)(in c need to tell them only one word)
printf ("what is your favorit color?\n");
scanf("%s",color);

printf("name a type of D&D damage\n");
scanf("%s",damage);

printf("name a D&D monster\n");
scanf("%s",monster);


printf("pleas tell us how tall you are in one number ex: six_foot \n");
scanf("%s",tall);

printf("you have awakend the %s. You look as its hoard of %s gems glisten in the light of your torch. You wacth as the beast rises to its \nfull hight towering over your %s height. The beast lunges at you and you take 12 %s",monster,color,tall,damage);
//print out our stroy with the variables inserted.("welcome%s to my program", name)

    return 0;
}