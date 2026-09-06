#include<stdio.h>
int main(void)
{
    int num;
    printf("Enter the number: \n");
    scanf("%d", &num);
    if (num % 5 == 0)
    printf("Number is divisible by 5");
    else
    printf("Number is not divisible by 5");

}
