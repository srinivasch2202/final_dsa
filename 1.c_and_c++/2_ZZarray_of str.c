#include<stdio.h>
struct student
{
    int roll;
    char name[20];
};
void main()
{
    struct student a[2];
    for(int i=0;i<2;i++)
    {
        printf("enter the roll of %d",i);
        scanf("%d",&a[i].roll);
        printf("enter the name of %d",i);
        scanf("%s",&a[i].name);
    }
}