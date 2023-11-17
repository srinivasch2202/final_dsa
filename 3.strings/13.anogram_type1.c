#include<stdio.h>
void main()
{
    char str1[]="decimal";
    char str2[]="medical";
    for(int i=0;str1[i]!='\0';i++)
    {
        for(int j=0;str2[i]!='\0';j++)
        {
            if(str1[i]==str2[j])
            {
                continue;
            }

        }
    }
}