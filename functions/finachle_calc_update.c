// Jasper Holt, financhle calc update
#include <stdio.h>

//ask what their rent is (varible that should be an input)
float income;
float rent;
float utilt;
float groce;
float trans;

int pec(float cost,float income,char type[]){
    float percent = cost/income*100;
    printf("you spend $%.2f on %s wich is %.2f%% of your income\n",cost,type,percent);
}
float due(char var[]) {
     float value;
    printf("what is your %s\n",var);
     scanf("%f", &value);  
    return value;

    

 //ask what income is (varible that should be an input)
    return 0;
}
int main(void){
    printf ("Hello there this is your financial calculator, pleas fill out the folowing inforaition and we will help you as best we can\n");


    income=due("income");
    rent=due("rent");
    utilt=due("utilities");
    groce=due("groceries");
    trans=due("transportaition");
    float save = income *.1;
    
    
    float spend= income - save - rent - utilt - groce- trans;
    
    
    
pec(rent,income,"rent");
pec(utilt,income,"utilities");
pec(groce,income,"groceries");
pec(trans,income,"transportaition");
pec(save,income,"saveings");
pec(spend,income,"spendings");
return 0;
}