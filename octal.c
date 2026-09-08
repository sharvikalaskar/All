#include<stdio.h>
int main(void)
{
    int n, i, j;
    int digit[9];
    int count = 0;
    printf("Enter the number: \n");
    scanf("%d", &n);
    while(n > 0)
    {
        i = n / 8;
        j = n % 8;
        digit[count] = j;
        count++;
        n = i;
    }
    while(count > 0)
    {
        count--;
        printf("%d", digit[count]);
    }
}
