#include<stdio.h>
void main()
{
    char name[]="how are you";
    int vcount=0,ccount=0;
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u'|| name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')
        {
          vcount+=1;  
        }
        else if((name[i]>='a' &&name[i]<='z') || (name[i]>='A'&&name[i]<='Z'))
        {
            ccount+=1;
        }

    }
    printf("vowel:%d\ncons:%d\n",vcount,ccount);
}