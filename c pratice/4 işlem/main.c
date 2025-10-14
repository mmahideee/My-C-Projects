#include <stdio.h>
#include <stdlib.h>

int main()
{
    char myoperator;
    float num1, num2;

    printf("Choose the operator (+,-,*,/): ");
    scanf("%c", &myoperator);

    printf("Enter two numbers: ");
    scanf("%f%f", &num1, &num2);

    printf("\noperator=%c\nnumber1=%f\nnumber2=%f\n", myoperator, num1, num2);

    switch(myoperator){

         case '+': printf("%f", num1+num2); break;
         case '-': printf("%f", num1-num2); break;
         case '*': printf("%f", num1*num2); break;
         case '/': if(num2 == 0){
                      printf("Error you cannot the division. Please change the second number and try again.");
                      }else printf("%f", num1/num2); break;
         default: printf("You entered the wrong operator\n\n");
    }

    return 0;
}
