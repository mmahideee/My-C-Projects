#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, remainder, division, sum;
    sum=0;

    printf("Enter the four-digit numbers: ");
    scanf("%d", &num);
    //4. basama�� bulu�
    division = num / 1000;
    sum += division;
    remainder = num % 1000;
    //3. basama�� bulu�
    division = remainder / 100;
    sum += division;
    remainder = remainder % 100;
    division = remainder / 10;
    sum += division;
    remainder = remainder % 10;
    // son basamak oldu�undan toplama eklencek sadece
    sum += remainder;
    printf("Sum of digits in the entered number: %d", sum);
    return 0;
}
