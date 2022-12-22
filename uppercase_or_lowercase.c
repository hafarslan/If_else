#include<stdio.h>

int main(void){
    char alph;
    printf("Enter a character: ");
    scanf("%c",&alph);

    if (alph >= 65 && alph <= 90 )
    {
        printf("%c is uppercase.",alph);
    }else if(alph >= 97 && alph <= 122){
        printf("%c is lowercase.",alph);
    }
    
    return 0;
}