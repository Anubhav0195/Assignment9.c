#include<stdio.h>
int main()
{
    float num;
    int choice;
    printf("Select 1, for negative to  positive \n");
    printf("Select 2,for positive to negative \n");
    printf("Enter choise\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("Enter a negative number \n");
        scanf("%f",&num);
        num = num *(-1);
        printf("The positive form of the number is %f\n",num);
        break;

        case 2:
        printf("Enter a positive number\n");
        scanf("%f",&num);
        num = num *(-1);
        printf("The negative form of the number is %f\n",num);
        break;
    }










    return 0;
}