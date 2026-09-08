#include<stdio.h>

void getName (char *name);
int pstrlen(char * pp);
int main(void)
{
  char name[50];
 getName (name);
   printf("Hello %s has %d lenth", name,pstrlen(name));
}
void getName (char *name)
{
    printf("Enter your name: \n");
    scanf("%s", name);
}

int pstrlen(char *pp)
{
    int s=0;
    while(*pp !='\0')
        {
            pp=pp+1;
            s=s+1;
        }
    return s;
}
