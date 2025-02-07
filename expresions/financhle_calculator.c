// Jasper Holt, Financhle calculator
#include <stdio.h>
//ask what their rent is (varible that should be an input)
float income;
float rent;
 float utilt;
 float groce;
float trans;


int main(void){
printf ("Hello there this is your financial calculator, pleas fill out the folowing inforaition and we will help you as best we can\n");
printf("what is your income\n");

scanf("%f", &income);

float save = income *.1;
printf("what is your rent\n");

scanf("%f",&rent);

printf ("how much do you spend on utilities\n");

scanf("%f",&utilt);


printf("how much do you spend on groceries\n");

scanf("%f",&groce);

printf("how much do you spend of transpotaition\n");

scanf("%f",&trans);


 //ask what income is (varible that should be an input)
    return 0;
}