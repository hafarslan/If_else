#include<stdio.h>

int main(void){
    int units, bill = 0;
    printf("Enter the units: ");
scanf("%d",&units);
    if(units <= 50){
        bill =  units * 0.25;
    }else if ( units <= 150)
    {
        bill = 25 + ((units - 50) * 0.25);
    }else if(units <= 250){
        bill = 100 + ((units - 150)*120);
    }else{
        bill = 220 + ((units - 250)*1.50);
    }
    printf("bill is: %d",bill);
    return 0;
}