// Jasper Holt, expresions practice c
#include <stdio.h>
#include <math.h>
float expression1=7-24/8*4+6;
float expression2=18/3-7+2*5;
float expression3=6*4/12+72/8-9;
float expression4=(17-6/2)+4*3;
float expression5=-2*(1*4-2/2)+(6+2-3);
float expression6=-1*((3-4*7)/5)-2*24/6;
float expression7=(3*(int)pow(5,2)/15)-(5-pow(2,2));
float expression8=((int)pow(1,4)*pow(2,2)+pow(3,3))-pow (2,5)/4;
float expression9=(int)pow(22/2-2*5,2)+pow(4-6/6,2);

int main(void){
   printf("%f \n",expression1);
   printf("%f \n",expression2);
   printf("%f \n",expression3);
   printf("%f \n",expression4);
   printf("%f \n",expression5);
   printf("%f \n",expression6);
   printf ("%f \n",expression7);
   printf ("%f\n",expression8);
   printf ("%f\n",expression9);
    return 0;
}