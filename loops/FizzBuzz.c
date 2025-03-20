// Jasper Holt, TEMPLATE
#include <stdio.h>
int x = 1;
int main(void){
    
    while (x < 51){
    if (x%3==0 && x%5==0){
        printf("fizzBuzz\n");
    }else if (x%3==0){
        printf("fizz\n");
    }else if (x%5==0){
        printf("Buzz\n");
    }else{
        printf("%d\n",x);
    }
    x+=1;
 };


  
    return 0;
}