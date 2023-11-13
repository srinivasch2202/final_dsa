#include<stdio.h>
void main()
{
    char name[]="how are you";
    int word=0;
    for(int i=0;name[i]!='\0';i++)
    {
        if(name[i]==' ')
        {
            word+=1;
        }
    }
    word+=1;//we can assign 1 at starting
    printf("%d\n",word);

    with_more_space();
}

void with_more_space()
{
    //whatif there are more than space in the string
    char gretting[]="hello   how are     you";
    int word=1;
    for(int i=0;gretting[i]!='\0';i++)

    {
        if(gretting[i]==' ' && gretting[i-1]!=' '){
            word+=1;
        }
    }
    printf("%d\n",word);

}