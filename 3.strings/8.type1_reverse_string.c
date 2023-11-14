#include<stdio.h>
void main()
{
    char name[ ]="python";
    char rev[7];
    int i=0;
    for(i=0;name[i]!='\0';i++)
    {

    }
    i=i-1;
    int j=0;
    for(j=0;i>=0;i--,j++)
    {
        rev[j]=name[i];
    }
    rev[j]='\0';
    printf("%s\n",rev);
}