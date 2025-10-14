#include <stdio.h>
#include <stdlib.h>

//Basýnç = mol sayýsý * R sabiti * sýcaklýk / hacim
//P= mol * R * T / v
int main()
{
    float pressure, constantR;
    int numberOfMoles, heat, volume;
    constantR=0.82;

    printf("Enter the volume of the container: ");
    scanf("%d", &volume);
    printf("Enter the number of moles in the container: ");
    scanf("%d", &numberOfMoles);
    printf("Enter the heat of the ambient: ");
    scanf("%d", &heat);

    pressure=(numberOfMoles*constantR*heat)/volume;

    printf("Pressure in a container with a volume of %d: %f\n\n\n", volume, pressure);

    return 0;
}
