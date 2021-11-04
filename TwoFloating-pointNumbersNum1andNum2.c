#include <stdio.h>
#include <conio.h>

int main()
{
float num1,num2,product;

    printf("Enter a number: ");
    scanf("%f",&num1);

    printf("Enter another number: ");
    scanf("%f",&num2);

    product=num1*num2;
    printf("%.3f * %.3f = %.3f\n",num1,num2,product);

    getch();

return 0;
}
