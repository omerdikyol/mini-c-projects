#include <stdio.h>
#include <conio.h>

int main(){
	printf("10 tane sayinin tek cift ve asal olanlarini ayri ayri listeleyen program.\n");
	printf("================================================================\n\n");
	
	int sayilar[10];
	int sayac,i;
	
	for(i = 0;i<10;i++)
	{
		printf("Bir sayi giriniz: ");
		scanf("%d", &sayilar[i]);
	}
	
	printf("Tek Sayilar:\n");
	for(sayac=0;sayac<10;sayac++)
	{
		if (sayilar[sayac] % 2 == 1)
			printf("%d, ",sayilar[sayac]);
	}
	printf("\nCift Sayilar:\n");
	for(sayac=0;sayac<10;sayac++)
	{
		if(sayilar[sayac] % 2 == 0)
			printf("%d, ",sayilar[sayac]);
	}
	
	printf("\nAsal Sayilar:\n");
	
	
	
	for(sayac = 0;sayac<10;sayac++)
	{
		char asal = 'E';
		for(i = 2;i<sayilar[sayac];i++)
		{
			if (sayilar[sayac] % i == 0)
			{
				asal = 'H';
			}
		}
		if (asal == 'E')
			printf("%d, ", sayilar[sayac]);
	}
	
	getch();
}
