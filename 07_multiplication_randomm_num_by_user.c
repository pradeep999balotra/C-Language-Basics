#include<stdio.h>
int main()
{
    int num1, num2;
    printf("Enter a number : ");
    scanf("%d",&num1);
    printf("Enter a second number : ");
    scanf("%d",&num2);

    printf("the multiplication of %d and %d is %d", num1, num2, num1*num2);

    return 0;
}