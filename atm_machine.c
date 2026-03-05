#include<stdio.h>
int main(){
    int Pin = 1234;
    
    printf("enter your atm pin: ");
    scanf("%d",&Pin);

    if(Pin == 1234)
    {
        int bal = 100000;
        int withdrawl;

        printf("enter the amount you want to withdrawl: ");
        scanf("%d",&withdrawl);

    if(withdrawl <= 100000)
    {
        printf(" Transaction is successful\nthank you sir! ");
        printf("\nRemaining balance:%d",bal - withdrawl);


    }
        
    else
    {
        printf(" u dont have that much money kid!");
    }
    
    }
    else 
    {
        printf("The Pin is Wrong Sir!");

    }
    
    return 0;
}