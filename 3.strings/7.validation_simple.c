#include<stdio.h>
void main()
{
    char *name="sri123*";
    for(int i=0;name[i]!='\0';i++)
    {
        if((name[i]>='a'&&name[i]<='z')||(name[i]>='A'&&name[i]<='Z')||(name[i]>='0'&& name[i]<='9'))
        {

        }
        else
        {
            printf("not valid");
            break;
        }
    }
    printf("valid");
}