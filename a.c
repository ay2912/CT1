/*Project to sort the bills in a coffee shop and 
provide discount accordingly.*/
#include <stdio.h>
#include <conio.h>
int main(){
    int billamt;
    printf("Enter the total bill amount of the customer:");
    scanf("%d",&billamt);

    if(billamt>=2000){
        billamt=billamt-(billamt * 0.2);
        printf("Bill amount after 20 percent discount is %d",billamt);
    }
    else if(billamt>=1000 && billamt<2000){
        billamt=billamt-(billamt * 0.1 );
        printf("Bill amount after 10 percent discount is %d",billamt);
    }
    else{
        billamt=billamt-(billamt* 0.05);
        printf("Bill amount after 5 percent discount is %d",billamt);
    }
}