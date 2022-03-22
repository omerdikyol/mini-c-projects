#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main(){
	printf("3*3luk bir matrisin degerlerini kullaniciya soran ve matrisi ekrana yazdiran program\n");
	printf("=================================================================\n\n");
	
	int sayilar[3][3];
	int i,j;
	
	for(i = 0;i<3;i++)
	{
		for(j = 0;j<3;j++)
		{
			printf("%d. satir %d. sutundaki sayiyi giriniz: ", i+1,j+1);
			scanf("%d", &sayilar[i][j]);
		}
	}
	
	for(i = 0;i<3;i++)
	{
		for(j = 0;j<3;j++)
			printf("%d ", sayilar[i][j]);
		printf("\n");
	}
		
	
	
	
	
	
	
	
	
	
	
	getch();
}
