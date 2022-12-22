#include<stdio.h>

int main(void){
        int side1,side2,side3;
    printf("Enter the side of tringle: ");
    scanf("%d%d%d",&side1,&side2,&side3);

    if (side1 == side2 == side3)
    {
        printf("Make a Equilateral triangle.");
    }else if(side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("Make a Isoscele trianlge.");
    }else{
        printf("Make a Scalene triangle.");
    }
    
    
    return 0;
}