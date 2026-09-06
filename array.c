#include <stdio.h>
int main(void)
{
int A[5], B[5], i;
i = 0;
while(i < 5)
   {
    printf("Enter the array: \n");
    scanf("%d", &A[i]);
    B[i] = A[i];
    i = i + 1 ;
   }
   for( i = 0; i < 5; i++)
        printf("%d", B[i]);
}

