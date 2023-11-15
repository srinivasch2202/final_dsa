#include<stdio.h>
void main()
{
    char name[]="dada";
    char hash[26]={0};
    for(int i=0;name[i]!='\0';i++)
    {
        int num=name[i]-97;
        hash[num]+=1;
    }
    for(int j=0;j<26;j++)
    {
        if(hash[j]>1)
        {
        
            // char num=hash[j]+97;
            printf("%d\t%c\n",hash[j],j+97);
            // printf("%c\n",j+97);
        }
    }
}