// #include<stdio.h>

// int main(void){
//     char alph;
//     printf("Enter a character: ");
//     scanf("%c",&alph);

//     if ((alph >= 'a' && alph <= 'z' )||(alph >= 'A' && alph <= 'Z' ))
//     {
//         printf("%c is alphabet.",alph);
//     }else{
//         printf("%c is not alphabet.",alph);
//     }
    
//     return 0;
// }

#include<stdio.h>

int main(void){
    char alph;
    printf("Enter a character: ");
    scanf("%c",&alph);

    if ((alph >= 65 && alph <= 90 )||(alph >= 97 && alph <= 122 ))
    {
        printf("%c is alphabet.",alph);
    }else{
        printf("%c is not alphabet.",alph);
    }
    
    return 0;
}