#include<stdio.h>

int main(void){
    char alph;
    printf("Enter a character: ");
    scanf("%c",&alph);

    if ((alph == 'A'|| alph == 'E'|| alph == 'O'||alph == 'U' || alph =='I')||(alph == 'a'|| alph == 'e'|| alph == 'o'||alph == 'u' || alph =='i'))
    {
        printf("%c is vowel.",alph);
    }else{
        printf("%c is a consonant.",alph);
    }
    
    return 0;
}