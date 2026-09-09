#include<stdio.h>
#include<stdlib.h>

int main()
{
    float a,b;
    char op;

    printf("enter first number" );
    scanf("%f",&a);

    printf( "enter operator (+,-,*,/)");
    scanf (" %c",&op);

    printf ("enter second number ");
    scanf ("%f",&b);

    switch (op)
    {
    case'+':
        printf("Result = %.2f", a + b );
        break;

    case '-':
        printf("Result = %.2f", a - b );
        break;

    case'*':
        printf ("Result = %.2f", a * b);
        break;

    case '/':
        printf ("Result = %.2f", a / b );
        break;


    default:
        printf("Invalid operator");
    }

    return 0;
}

