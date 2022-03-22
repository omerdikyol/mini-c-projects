#include <stdio.h>
#include <conio.h>

int main(){
	printf("Kullanicinin girdigi 5 sayiyi kucukten buyuge dogru siralayip listeleyen program.\n");
	printf("==========================================================================\n");
	
	int sayilar[5];
	int sayi,i,j,min,temp;
	
	for(i = 0;i<5; i++)
	{
		printf("Sayi giriniz: ");
		scanf("%d", &sayi);
		sayilar[i] = sayi;	
	}
	
	printf("Degisim oncesi:\n");
	for(i=0;i<5;i++)
		printf("%d,", sayilar[i]);
		printf("\n");
	
	for(i = 0;i < 4;i++)
	{
		for(j = i+1;j < 5;j++)
		{
			if (sayilar[i] > sayilar[j])
			{
				temp = sayilar[i];
				sayilar[i] = sayilar[j];
				sayilar[j] = temp;
			}
		}
	}
	
	printf("Degisim sonrasi:\n");
	for(i=0;i<5;i++)
		printf("%d,", sayilar[i]);
	
	getch();
}
