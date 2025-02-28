// Jasper Holt, old enough C
#include <stdio.h>
float age;
int main(void){
    printf("how hold are you?\n");
    scanf("%d", &age);
    if(age>=18){
        printf("You are old enoigh to vote");
    }else if(age>= 16){
        printf("You are old enough to drive");
    }else if (age==15){
        printf("you are old enough to get your learners permit");
    }else if (age=6){
        printf("you can go to school");
    }else{
        printf("you are so small");
    }
    return 0;
}