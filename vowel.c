#include<stdio.h>
int main(void)
{
    char ch;
    printf("Enter the char: \n");
    scanf("%c", &ch);
    switch(ch)
    {
        case 'A':
        printf("Given char is vowel"); break;
        case 'a':
        printf("Given char is vowel");break;
        case 'E':
        printf("Given char is vowel");break;
        case 'e':
        printf("Given char is vowel");break;
        case 'I':
        printf("Given char is vowel");break;
        case 'i':
        printf("Given char is vowel");break;
        case 'O':
        printf("Given char is vowel");break;
        case 'o':
        printf("Given char is vowel");break;
        case 'U':
        printf("Given char is vowel");break;
        case 'u':
        printf("Given char is vowel");break;
         default :
    printf("Given char is not vowel");
    }

}
