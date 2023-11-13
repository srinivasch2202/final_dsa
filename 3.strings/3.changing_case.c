#include<stdio.h>
void main()
{
    char name[]="WELCOME";
    for(int i=0;name[i]!='\0';i++)
    {
        name[i]=name[i]+32;
    }
    printf("%s",name);
}