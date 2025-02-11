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

float spend= income - save - rent - utilt - groce- trans;

float perc_rent= rent/income*100;

float perc_utilt= utilt/income*100;

float perc_groce= groce/income*100;

float perc_trans= trans/income*100;

float perc_spend= spend/income*100;

float perc_save= save/income*100;

printf ("your rent is $%.2f wich is %.2f %% of your income\n",rent,perc_rent);

printf ("your utilities are $%.2f wich is %.2f %% ofyour income\n",utilt,perc_utilt);

printf ("your groceries are $%.2f wich is %.2f %% of you income\n",groce,perc_groce);

printf ("you spend $%.2f on transportaition wich is %.2f %% of your income\n",trans,perc_trans);

printf ("you save $%.2f each moth wich is %.2f %% of your income\n",save,perc_save);

printf ("you spend $%.2f wich is %.2f %% of your income\n",spend,perc_spend);

 //ask what income is (varible that should be an input)
    return 0;
}