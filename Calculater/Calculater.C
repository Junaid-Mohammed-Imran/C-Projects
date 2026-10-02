#include <stdio.h>

int main(){
    int a;
    float num1 , num2;
    printf("Enter your two numbers :\n");
    scanf("%f %f",&num1,&num2);

    printf("for 1.add 2.subtract 3.multiply 4.divide 5.remainder\n");
    scanf("%d",&a);

    switch(a){
        case 1:
            printf("The addition of your number is :%f\n",num1+num2);
            break;
        
        case 2:
            printf("The subtraction of your number is :%f\n",num1-num2);
            break;
        
        case 3:
            printf("The multiplication of your number is :%f\n",num1*num2);
            break;

        case 4:
            if ((int)num2 == 0){
                printf("cant divide by zero");
            }
            else{
                printf("The division of your two number is :%f\n",num1/num2);
            }
            break;
        
        case 5:
            if ((int)num2 == 0){
                printf("cant divide by zero");
            }
            else{
                printf("The remainder of your two number is :%d\n",(int)num1 %(int)num2);
            }
            break;
        
        default :
            printf("you have enter invalid choice\n");
    }
    return 0;
}
