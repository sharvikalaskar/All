#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
    char str[9];
    int mfactor = 1, i, sum = 0, ch, digit, index = 0;

    printf("Enter the binary digit: \n");
    scanf("%s", str);
   i = strlen(str) - 1;
    while(i >= 0)
    {

        ch = str[i];
        digit = ch - 48;
        mfactor =(int) pow(2,index);
        sum = sum +(int)( mfactor *digit);
        i--;
        index++;
    }

    printf("%d", sum);

}
