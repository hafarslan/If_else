// #include<stdio.h>

// int main(void){
//     int num1,num2;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&num1,&num2);

//     if (num1 > num2)
//     {
//         printf("%d is greater.",num1);
//     }else if(num2 > num1){
//         printf("%d is greater.",num2);
//     }else{
//         printf("%d and %d are equals.",num1,num2);
//     }
//     return 0;
// }



#include<stdio.h>

int main(void){
        int max, num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
   
    if (num1 > num2)
    {
        max = num1;
    }else{
        max = num2;
    }
    printf("%d is greater.",max);
    
     return 0;
}