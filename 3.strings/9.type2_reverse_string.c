#include<stdio.h>
void main()
{
    char name[]="python)";
    int j;
    for(j=0;name[j]!='\0';j++)
    {
    }
    j=j-1;
    for(int i=0;i<j;i++,j--)
    {
        char t=name[i];
        name[i]=name[j];
        name[j]=t;
    }
    printf("%s\n",name);
}