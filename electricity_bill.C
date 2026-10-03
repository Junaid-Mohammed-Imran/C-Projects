
/*
Program : Electricity Bill Calculater
Author : Junaid Mohammed Imran 
Date : 20 September 2026
Description : Calculates the electricity bill using slab rates and 5% tax
*/

#include <stdio.h>

int main(){

    int unit;
    float charge , tax , total;
    
    printf("Enter your units consumed: \n");
    scanf("%d",&unit);

    if (unit < 0){
        printf("invalid units\n");
        return 0;
    }
    else if (unit <=100){
        charge = unit * 5;
    }
    else if (unit > 100 && unit <= 200){
        charge = 100 * 5 + (unit - 100 )*7;
    }
    else {
        charge = 100 * 5 + 100 * 7 + ( unit - 200 ) * 10;
    }

    tax = charge * 0.05;
    total = charge + tax;

    printf("your total units are : %d\n",unit);
    printf("The total tax : %.2f\n",tax);
    printf("Your total bill : %.2f\n",total);
    

    return 0;
}