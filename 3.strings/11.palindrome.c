#include<stdio.h>
void main()
{
    char name[]="dad";
    int i,j;
    for(j=0;name[j]!='\0';j++)
    {

    }
    j=j-1;
    for(i=0;i<j;i++,j--)
    {
        if(name[i]!=name[j])
        {
            printf("not a palidrome");
            break;
        }
    }
    printf("palidrome");
}