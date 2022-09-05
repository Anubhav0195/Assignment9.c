#include<stdio.h>
int main()
{
    int x,a,b,c;
    while(1)
    {
        printf("\nIsosceles triangle or not");
        printf("\n Right angle triangle or not");
        printf("\nEquilateral triangle or not");
        printf("\n exit");
        printf("Enter your choice\n");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("Enter the three sides of a triangle\n");
            scanf("%d %d %d", &a,&b,&c);
            if(a==b || a==c || b==c )
            printf("The triangle is isosceles triangle\n");
            else
            printf("the triangle is not an isosceles triangle\n");
            break;

            case 2:
            printf("Enter the three sides of a triangle\n");
            scanf("%d %d %d",&a,&b,&c);
            if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
            printf("The triangle is a right angle triangle\n");
            else
            printf("the triangle is not aright angle triangle\n");
            break;

            case 3:
            printf("Enter the three sides of a triangle\n");
            scanf("%d %d %d",&a,&b,&c);
            if(a==b==c)
            printf("The traingle is Equilateral\n");
            else
            printf("This triangle is not equilateral\n");
            break;
            case 4:
            printf("Exit\n");











        }







    }














    return 0;
}