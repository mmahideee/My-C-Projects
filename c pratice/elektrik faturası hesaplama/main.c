#include <stdio.h>
#include <stdlib.h>

// Fatura miktarý = Harcanan elektrik * Birim Fiyat + Abone ücreti
int main()
{
    float odenecekfatura, eskibirimfiyat, yenibirimfiyat;
    float enflasyon, eskiaboneucreti, yeniaboneucreti;
    int yeniokuma, eskiokuma, toplamharcananelektrik;

    printf("Enflasyon oranini girin: ");
    scanf("%f", &enflasyon);
    printf("Onceki aya ait birim fiyat miktarini girin: ");
    scanf("%f", &eskibirimfiyat);
    printf("Onceki aya ait abonelik ucretini girin: ");
    scanf("%f", &eskiaboneucreti);
    printf("Bir onceki aya ait okuma degerini girin: ");
    scanf("%d", &eskiokuma);
    printf("Bu aya ait okuma degerini girin: ");
    scanf("%d", &yeniokuma);

    toplamharcananelektrik= yeniokuma-eskiokuma;
    yenibirimfiyat=eskibirimfiyat*(1+enflasyon/100);
    yeniaboneucreti=eskiaboneucreti*(1+enflasyon/100);
    odenecekfatura=toplamharcananelektrik * yenibirimfiyat + yeniaboneucreti;
    printf("\nodeyeceginiz fatura tutari:%f\n\n", odenecekfatura);

    return 0;
}
