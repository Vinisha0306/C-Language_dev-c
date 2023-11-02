#include<stdio.h>
#include<conio.h>

main()
{
     int age,w;
     char a;
     long int Mn;
     float b;
     clrscr();
     printf("name:vinisha lathiya\n");
     printf("\nEnter your age:");
     scanf("%d",&age);
     printf("Enter your Blood group:\n");
     scanf(" %c",&a);
     printf("Enter your Mobile number:\n");
     scanf("%ld",&Mn);
     printf("Enter your hight:\n");
     scanf("%f",&b);
     printf("Enter your weigth:\n");
     scanf("%d",&w);

     printf("your age:%d\n",age);
     printf("your Blood group:%c\n",a);
     printf("your Mobile number:%ld\n",Mn);
     printf("your hight:%.2f\n",b);
     printf("your weigth:%d\n",w);
     getch();
}