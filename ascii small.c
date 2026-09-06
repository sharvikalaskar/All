#include<stdio.h>
int main (void)
{
    char word[100];
    int i = 0;
    printf("Enter the word: \n");
    scanf("%s", word);
    while(word[i] != '\0')
    {
        if(word[i] >= 65 && word[i] <= 90)
        {
            word[i] = word[i] + 32;
        }

        i++;
    }
    printf("%s", word);

}
