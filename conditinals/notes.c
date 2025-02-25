// Jasper Holt, condidtinals notes
#include <stdio.h>
#include <string.h> // needed to compair strings
char name[]="jasper";
int num;

int main(void){
    //10.How do you write an if statement in C?
    if(strcmp(name,"jasper")==0){// betean the curly bracets its in our if stament//strcmpmeans string comparison whne the outcome is 0 the strings are the same
        printf("hello jasper");
    
    //11.How do you write else statements in C?
    }else{
        printf("hello human welcome to my mind\n");
    }
    printf("how many siblings do you have?\n");
    scanf("%d", &num);
    //12.How do you write elif/ else if statements in C?
    if(num==0){
        printf("you are an only child");
    }else if(num <= 2){
        printf("you have a couple siblings");
    }else if (num<=5){
    printf("you jhave a few siblings");
    }else{
        printf("you have a lot of siblings");
    }

    //13.How do you write the 3 logical operators in C?
    // &&= and
    // || = or
    // ! = not

    if(num==7 || num==13){
        printf("that is an unlicky number");
    }else if(num<10 && num>5){
        if(num==12){
            printf("thats a douzen");
        }
        printf("%d is a lagr single diget number\n", num);
    }else{
        printf("you typed in %d\n",num);
    }
    return 0;
}