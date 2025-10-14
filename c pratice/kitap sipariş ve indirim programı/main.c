#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bookPrice, orderQuantity;
    float discountRate, noDiscountPrice, discountPrice, sum;
    bookPrice=20;
    orderQuantity=0;

    printf("How many books would you like to order?\n: ");
    scanf("%d", &orderQuantity);
    if(orderQuantity >= 60){
        discountRate=0.30;
    }else{
        if(orderQuantity>=30 && orderQuantity<60){
            discountRate=0.20;
        }else if(orderQuantity>=10 && orderQuantity <30){
        discountRate=0.12;
        }else{
        discountRate=0.01;
        }
     }
     noDiscountPrice=bookPrice * orderQuantity;
     printf("The full price of the book:%.2f TL\n", noDiscountPrice);
     discountPrice= orderQuantity * bookPrice * discountRate;
     printf("Your discount amour is:%.2f TL\n", discountPrice);

     sum= noDiscountPrice - discountPrice;
     printf("Amount you will pay:%.2f TL\n", sum);

    return 0;
}
