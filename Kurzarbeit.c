// Lohnrechner für Kurzarbeit

#include <stdio.h>
#include <math.h>

int main()
{
	int pen,kpen; float inc,kinc,ninc;
	printf("------------------------------------------------------");
	printf("\n		Kurzarbeitslohnrechner\n");
	printf("------------------------------------------------------");
	printf("\nPensum ohne Kurzarbeit in Prozent: ");
	scanf("%d",&pen);
	if(pen>100){
		printf("\nPensum kann nur bis und mit 100 Prozent betragen!\n");
		return 0;
	}
	printf("\nPensum Kurzarbeit in Prozent (weniger als %d Prozent): ",pen);
	scanf("%d",&kpen);
	if(kpen>pen){
		printf("\nPensum für Kurzarbeit kann nicht mehr als normales Arbeitspensum betragen!\n");
		return 0;
	}
	printf("\nLohn im %d-Prozent-Pensum (ohne Kurzarbeit): CHF ",pen);
	scanf("%f",&inc);
	ninc = inc/pen*(pen-kpen);
	kinc = (inc*0.8)/pen*kpen;
	inc = ninc + kinc;
	printf("\nLohn mit Kurzarbeit: CHF %.2f\n",inc);
	printf("------------------------------------------------------");
	return 0;
}