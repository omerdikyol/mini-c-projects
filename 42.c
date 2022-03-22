#include <stdio.h>
#include <conio.h>

int main(){
	printf("Kullanicinin girecegi 5 sayiyi kullanicinin istedigi duzende siralayip ekrana listeleyen program.\n");
	printf("========================================================================================\n\n");
	
	int sayilar[5];
	int i,kucuk,buyuk,temp;
	char soru = ' ';
	for(i=0;i<5;i++)
	{
		printf("Bir sayi giriniz: ");
		scanf("%d", &sayilar[i]);
	}
	
	printf("Liste nasil siralansin?  (Kucukten Buyuge = K / Buyukten Kucuge = B): ");
	soru = getchar();
	scanf("%c", &soru);
	
	if ((soru == 'k') || (soru == 'K'))
	{
		for(buyuk=0;buyuk<4;buyuk++)
		{
			for(kucuk = buyuk+1;kucuk<5;kucuk++)
			{
				if (sayilar[buyuk] > sayilar[kucuk])
				{
					temp = sayilar[buyuk];
					sayilar[buyuk] = sayilar[kucuk];
					sayilar[kucuk] = temp;
				}
			}
		}
		printf("Kucukten Buyuge Siralama:\n");
		for(i = 0;i<5;i++)
			printf("%d, ", sayilar[i]);
		printf("\n");
	}
	
	else if ((soru == 'b') || (soru == 'B'))
	{
		for(buyuk=0;buyuk<4;buyuk++)
		{
			for(kucuk = buyuk+1;kucuk<5;kucuk++)
			{
				if (sayilar[buyuk] < sayilar[kucuk])
				{
					temp = sayilar[buyuk];
					sayilar[buyuk] = sayilar[kucuk];
					sayilar[kucuk] = temp;
				}
			}
		}
		printf("Buyukten Kucuge Siralama:\n");
		for(i = 0;i<5;i++)
			printf("%d, ", sayilar[i]);
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
}
