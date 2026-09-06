#include<stdio.h>
int main(void)
{
    int angle;
    printf("Enter the angle: \n");
    scanf("%d", &angle);
    if(angle < 90)
    {
        printf("Angle is Actue angle\n");
    }
     if(angle == 90)
    {
        printf("Angle is Right angle\n");
    }
     if(angle > 90)
    {
        printf("Angle is Obtus angle\n");
    }
}
