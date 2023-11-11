#include <stdio.h>
struct student 
{
    int roll_no;
    char name[20];
    float marks;

} ;
void main()
{
    struct student s1={1,"jenny",90.9};
    struct student s2={2,"srinivas",100};
    printf("%d  %s  %f  ",s1.roll_no,s1.name,s1.marks); 
}