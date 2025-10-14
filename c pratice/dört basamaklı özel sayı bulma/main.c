#include <stdio.h>
#include <stdlib.h>

//abcd = (ab+cd)*(ab+cd) ise özel sayı olcak

int main()
{
    int num, newnum, part1, part2;

    printf("Enter a four digit positive number: ");
    scanf("%d", &num);

    part1=num/100;
    part2=num%100;
    newnum=(part1+part2)*(part1+part2);

    if(newnum == num){
        printf("%d is a speacial issue\n", num);
    }else{
        printf("%d isn't a speacial issue\n", num);
    }

    return 0;
}
