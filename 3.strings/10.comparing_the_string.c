#include<stdio.h>
void main()
{
    char name[]="painter";
    char names[]="painter";
    int i,j;
    for(i=0,j=0;name[i]!='\0'&&names[j]!='\0';i++,j++)
    {
        if(name[i]!=names[j]){
            break;
        }
    }
    if(name[i]==names[j])
    {
        printf(" both are equal");
    }
    else if(name[i]<names[j])
    {
        printf("%s is smaller",name);
    }
    else
    {
        printf("%s is smaller",names);
    }
}