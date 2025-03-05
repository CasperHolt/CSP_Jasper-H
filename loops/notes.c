
// Jasper Holt, TEMPLATE
#include <stdio.h>

int main(void){
   printf("hello world");
   
//What is a loop? 
//a section of code that gets repeated multipil times

//What are the two types of loops?
//wile loops 
int start = 0;
while(start <5){
    printf("heloo\n");
    start++;

}
//and for loops
int q;
for(q=0;q<5;q++){
    printf("%d\n",q);
}


//What is iteration?
//reapiting somthing with minor changes
//What are arrays(lists)? 
//a variable holding multiple values

//How do you make arrays(lists) in C?
//arrays all need to be the same data typ
int grades[] = {88,97,100,70, 72, 99, 61};
//1. we set the data typ first 2. after nameing put a bracket and write the lenght of tenlest { camas beten each item}

printf("csp garde: %d\n",grades[2]);
//change an item in the array
grades[2]=95;
printf("csp garde: %d\n",grades[2]);
 int size = sizeof(grades);
 int length = sizeof(grades)/sizeof(grades[0]);
 printf("%d\n",length);
 //array with strings
 // fist brakets sets lenght of array(list) second setes the lenght of each string
 char movies[][20] = {"cars","treasure Planet","an ameracan tale","marley and me","Avengers"};
 printf("the movie is %s\n", movies[1]);
 int mlength= sizeof(movies)/sizeof(movies[0]);
//How do you make for loops in C?
// set the iterater, keeps trake of times going through the loop(best set as x or i)
int x;
// in parenthisies (starting point; ending poit; what we count by)
for (x=0;x<=10;x+=2){
    printf("%d\n", x);
}
int m;
for(m=0;m<mlength;m++){
    printf("%s\n", movies[m]);
}

//How do you make while loops in C?
int w=100;

while(w>=0){
    printf("%d\n", w);
    w -=10;
}
return 0;
}