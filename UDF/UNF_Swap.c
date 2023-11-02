#include<stdio.h>

int input1(int a)
{
    printf("Enter A:");
    scanf("%d",&a);
    return a;
}

int input2(int b)
{
    printf("Enter B:");
    scanf("%d",&b);
    return b;
}

int swapa(int a,int b)
{
    a=b;
    return a;
}

int swapb(int a,int b)
{
    b=a;
    return b;
}

int main()
{
    int a,b;
    a=input1(a);
    b=input2(b);
    a=swapa(a,b);
    b=swapb(a,b);
    printf("A:%d\t B:%d ",a,b);
    return 0;
}