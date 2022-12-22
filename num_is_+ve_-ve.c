#include<stdio.h>

int main(void){
    int num;
    printf("Enter a number: ");
    scanf("%i",&num);

    if (num > 0)
    {
        printf("%d is +ve.",num);
    }else if(num < 0){
        printf("%d is -ve",num);
    }else{
        printf("%d is nethier +ve nor -ve.",num);
    }
    
    return 0;
}