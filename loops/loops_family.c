// Jasper Holt, TEMPLATE
#include <stdio.h>

int main(void){
    char family[][20] = {"jasper","dad","mom","Darby","Pj","Gabby","Gator","Curtis","blue","bear","fozzie","rosie"};
    int flength= sizeof(family)/sizeof(family[0]);

    int i;
    for(i=0;i<=flength;i++){
        printf("hello %s\n",family[i]);
    }
     


    return 0;
}