#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, max, min;

    printf("Enter the three numbers: ");
    scanf("%d%d%d", &num1,&num2,&num3);

    if(num1>=num2 && num1>=num3){
        max=num1;
    }else if(num2>=num1 && num3<=num2){
        max=num2;
    }else{
        max=num3;
    }
    if(num1<=num2 && num1<=num3){
        min=num1;
    }else if(num2<=num1 && num2<=num3){
        min=num2;
    }else{
        min=num3;
    }
    printf("The largers number:%d\n", max);
    printf("The least number:%d", min);

    return 0;
}
