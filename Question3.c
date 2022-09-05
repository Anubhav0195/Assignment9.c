#include<stdio.h>
int main()
{
    int x;
    printf("Enter week day number");
    scanf("%d",&x);
    switch(x)
    {
        case 1:
        printf("Its Monday, shiva day\n");
        break;
        case 2:
        printf("Its tuesday, Hanuman day\n");
        break;
        case 3:
        printf("Its wednesday,which after tuesday\n");
        break;
        case 4:
        printf("Its thrusday,Vishnu day\n");
        break;
        case 5:
        printf("Its friday, laxmi day\n");
        break;
        case 6:
        printf("Its saturday, maa kali day\n");
        break;
        case 7:
        printf("Its sunday fun day\n");
        break;
        default:
        printf("Please enter valid day\n");
        
    }









    return 0;
}