#include<stdio.h>
void main()
{
    char a='a';
    // char b="aa";
    printf("%c\n",a);

    char x[5]={'a','b','c','d','e'};
    char c[]={'a','b'};
    char d[5]={'x','y','z'};//remaining will be zero



    char array[10]={'j','o','h','n'};//array of characters 



    //this all created in stack
    char str[10]={'j','o','h','n','\0'};//array of string
    char strin[]={'j','o','h','n','\0'};//better way the size of array will be 5
    char firstname[]="john";


    //created in heap
    char *name="srinivas ch";


    for(int i=0;i<5;i++)
    {
        printf("%c\n",x[i]);
    }


    printf("%s\n",str);


    char t[10];
    printf("enter the teacher name");
    scanf("%s",&t);

    printf("%s\n",t);

    char r[9];
    gets(r);
}