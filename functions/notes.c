// Jasper Holt, functions notes c
#include <stdio.h>


void due(char assignment[50], char day[20]) {
    printf("the %s assignment is due %s",assignment,day);

    
}

int main(void) {
    due("functions notes","today\n");
    due("hello world update","tomorrow\n");
    due("finachle calculator update","friday\n");

    return 0;
}