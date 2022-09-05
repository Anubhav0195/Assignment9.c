#include<stdio.h>
int main()
{
    int x,a,b;
    while(1)
    {
        printf("\n1 Addition");
        printf("\n2 Substraction");
        printf("\n3 Multiplication");
        printf("\n4 Division");
        printf("\n5 Exit");
        printf("Enter your choice\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("Enter two numbers");
            scanf("%d %d",&a,&b);
            printf("Sum is %d",a+b);
            break;

            case 2:
            printf("Enter two numbers");
            scanf("%d %d",&a,&b);
            printf("Substraction is %d",a-b);
            break;

            case 3:
            printf("Enter two numbers");
            scanf("%d %d",&a,&b);
            printf("product is %d",a*b);
            break;

            case 4:
            printf("Enter two numbers");
            scanf("%d %d",&a,&b);
            printf("Quotient is %d",a/b);
            break;

            case 5:
            printf("Exit");
            break;


        }








        }





     return 0;
    }
