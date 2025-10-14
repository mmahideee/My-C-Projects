#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    char operator;

    printf("please enter the first num ");
    scanf("%f", &num1);

    printf("please enter the second num");
    scanf("%f", &num2);

    printf("Select the operation you want to perform (+, -, *, /): ");
    scanf(" %c", &operator);

    switch(operator){
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if(num2!=0)
                printf("Result: %.2f\n");
            else
                printf("Division by zero eror!\n");
            break;
        default:
            printf("invalid transaction!\n");

    }
    return 0;
}
