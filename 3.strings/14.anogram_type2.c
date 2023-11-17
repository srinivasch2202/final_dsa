#include<stdio.h>
void main()
{
    char str1[]="decimal";
    char str2[]="medical";
    char hash[26]={0};
    int i,j;
    for(i=0;str1[i]!='\0';i++)
    {
        int temp=str1[i]-97;
        hash[temp]+=1;
    }
    for(j=0;str2[j]!='\0';j++)
    {   
        int temp=str2[j]-97;
        hash[temp]-=1;
        // if(hash[str2[j]-97]<0)
        // {
        //     printf("not a anogram");
        //     break;
        // }
    }

    for(int k=0;k<=26;k++)
    {
        if(hash[k]<0)
        {
            printf("not a anogram");
            break;
        };
    }
    printf("it is anogram");
}