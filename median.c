#include<stdio.h>
int main(void)
{
    int a[5], i, j = 0, temp;
      i = 0;
    while(i < 5)
    {
    printf("Enter the number: \n");
    scanf("%d", &a[i]);
    i++;
    }
    i = 0;
    while(i < 5)
    {
        j=i+1;
        while(j< 5)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i]= a[j];
                a[j]=temp;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while(i < 5)
    {
        printf("%d", a[i]);
        i++;
    }
}
