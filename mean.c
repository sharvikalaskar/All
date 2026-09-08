#include<stdio.h>
#include<string.h>
int main(void)
{
    int n, i, ch, digit, sum = 0, mean = 0;
    char str[50];
    printf("Enter the numbers: \n");
    scanf("%s", str);
    i = strlen(str)-1;
    n =  strlen(str);
    while(i >= 0)
    {
    ch = str[i];
    digit = ch - 48;
    sum = sum + digit;
    mean = sum / n;
    i--;
    }
    printf("sum: %d\n", sum);
    printf("Mean: %d\n", mean);

}
