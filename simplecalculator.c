#include <stido.h>
void main() 
{
    char operator;
    double a,b;
    printf("Enter an operator (+, -, *,): ");
    scanf("%c", &operator);
    printf("Enter two operands: ");
    scanf("%lf %lf",&a, &b);
    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",a,b,a+b);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",a,b,a-b);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",a,b,a*b);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",a,b,a/b);
            break;
        default:
            printf("Error! operator is not correct");
    }
}