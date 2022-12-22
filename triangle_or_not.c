#include<stdio.h>

int main(void){
    int side1,side2,side3;
    printf("Enter the side of tringle: ");
    scanf("%d%d%d",&side1,&side2,&side3);

    if (((side1+side2) > side3 && ((side2+side3) > side1) && ((side1+side3) > side2)))
    {
        printf("Correct! Make a triangle.");
    }else{
    printf("Sorry! Not make a triangle.");
    }
    
    return 0;
}