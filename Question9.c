#include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("Enter a number to its upper nearest odd number\n");
    scanf("%d",&x);
    switch(x%2==0)
    {
        case (1):
        x=x+1;
        printf("%d",&x);
    }








    return 0;
}