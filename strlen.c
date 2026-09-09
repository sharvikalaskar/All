#include<stdio.h>
#include<string.h>
int main(void)
{
    char word[80];
    int length;
    printf("Enter the word: \n");
    scanf("%s",word);
    length = strlen(word);
    printf("The length of word %s is: %d", word, length);
    printf("\n");

}
