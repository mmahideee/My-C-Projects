#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,squareroot;

    printf("Enter a positive number: ");
    scanf("%d", &num);
    if(num < 0){
        printf("Please do not to do this\n");
    }else{
        squareroot=sqrt(num);
        if(squareroot*squareroot == num){
            printf("square root of %d is an integer\n", num);
            printf("square root of %d\n", squareroot);
        }else{
            printf("No it is not\n");
        }
    }

    return 0;
}
