#include <stdio.h>
#include <stdlib.h>

int main()
{
int number1, number2, total;

    printf("please enter two integers: ");
    scanf("%d %d", &number1, &number2);

    total = number1 + number2;

    printf("Total: %d\n", total);
    return 0;
}
