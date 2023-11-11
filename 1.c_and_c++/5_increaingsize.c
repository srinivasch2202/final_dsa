#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p=(int *)malloc(4*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    // array is created in heap memory


    // step one :- create another pointer variable with deseried size and point to thet
    int *q=(int *)malloc(10*sizeof(int));
    for(int i=0;i<10;i++)
    {
        q[i]=p[i];
        // remaining valuabe will be garbage values

    }

    for(int j=0;j<10;j++)
    {
        printf("%d\n",p[j]);

    }
    printf("=======================================================\n");
    free(p);
    p=q;
    q=NULL;
    
    for(int l=0;l<10;l++)
    {
        printf("%d\n",p[l]);
    }

    printf("--------------------------------------------------\n");
    man();
}


// something different

void man()
{
    // 2nd way
    int *p=(int *)malloc(4*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=89;

    int *o=(int *)malloc(10*sizeof(int));

    p=o;// refernecing the p to q;
    // q=NULL;

    for(int i=0;i<10;i++)
    {
        printf("%d\t%d\n",p[i],o[i]);
    }


}