#include<stdio.h>

int input(int a)
{
    printf("\nEnter A:");
    scanf("%d",&a);
    return a;
}

int inputb(int b)
{
    printf("\nEnter B:");
    scanf("%d",&b);
    return b;
}

int sum(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int multi(int a,int b)
{
    return a*b;
}

int div(int a,int b)
{
    return a/b;
}

int mod(int a,int b)
{
    return a%b;
}

int main()
{
    int c,ans,a,b;

    start:
    
    printf("\nEnter.....\n\n");
    printf("1) Addition\n");
    printf("2) Subtraction\n");
    printf("3) Multiplication\n");
    printf("4) Division\n");
    printf("5) modulus\n");
    printf("Enter 0 for Exit\n\n");
    printf("Enter your choice:");
    scanf("%d",&c);
    
    switch(c)
    {
        case 1: 
            a=input(a);
            b=inputb(b);
            ans=sum(a,b);
            printf("\n\n\tAddition:%d",ans);
            goto start;
            
        case 2: 
            a=input(a);
            b=inputb(b);
            ans=sub(a,b);
            printf("\n\n\tSubtraction:%d",ans);
            goto start;
            
        case 3: 
            a=input(a);
            b=inputb(b);
            ans=multi(a,b);
            printf("\n\n\tMultiplication:%d",ans);
            goto start;
            
        case 4: 
            a=input(a);
            b=inputb(b);
            ans=div(a,b);  
            printf("\n\n\tDivision:%d",ans);
            goto start;  
            
        case 5: 
            a=input(a);
            b=inputb(b);
            ans=mod(a,b);
            printf("\n\n\tModulus:%d",ans);
            goto start;
    }
    return 0;
}