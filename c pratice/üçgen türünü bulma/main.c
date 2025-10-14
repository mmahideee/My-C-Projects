#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c;
    char longestSide;

    printf("Enter the side lengths of the triangle: ");
    scanf("%d%d%d", &a,&b,&c);

    if(a>b && a>c){
        longestSide='a';
    }else if(b>a && b>c){
        longestSide='b';
    }else{
        longestSide='c';
    }
    if(longestSide == 'a'){
        if(a*a == b*b + c*c){
            printf("Right triangle\n");
        }else if(a*a > b*b + c*c){
            printf("Obtuse triangle");
        }else if(a*a < b*b + c*c){
            printf("Acute triangle");
        }else{
            printf("Error you cannot create a triangle");
        }
    }else if(longestSide == 'b'){
         if(b*b == a*a + c*c){
            printf("Right triangle\n");
        }else if(b*b > a*a + c*c){
            printf("Obtuse triangle");
        }else if(b*b< a*a + c*c){
            printf("Acute triangle");
        }else{
            printf("Error you cannot create a triangle");
        }
    }else{
         if(c*c == b*b + a*a){
            printf("Right triangle\n");
        }else if(c*c > b*b + a*a){
            printf("Obtuse triangle");
        }else if(c*c < b*b + a*a){
            printf("Acute triangle");
        }else{
            printf("Error you cannot create a triangle");
        }
    }
    return 0;
}
