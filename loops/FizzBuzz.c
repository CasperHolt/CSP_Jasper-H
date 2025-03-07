// Jasper Holt, TEMPLATE
#include <stdio.h>
int x = 1;
int main(void){
    
    while (x < 51){
    if (x%3==0 && x%5==0){
        printf("fizzBuzz");
    }else if (x%3==0){
        printf("fizz");
    }else if (x%5==0){
        printf("Buzz");
    }else{
        printf("%d\n",x);
    }
    x+=1;
 };


  
    return 0;
}