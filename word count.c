#include <stdio.h>
int main(void)
{
    int cnt = 0;
    int i = 0;
    int inWord = 0;
    char string[1000];

    printf("Enter the sentence: \n");
    fgets(string, sizeof(string), stdin);

    while (string[i] != '\0')
    {
        if (string[i] == ' ' || string[i] == '\n' || string[i] == '\t')
        {
            inWord = 0;
        }
        else if (inWord == 0)
        {
            inWord = 1;
            cnt++;
        }
        i++;
    }

    printf("%d\n", cnt);
    return 0;
}
