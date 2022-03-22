#include <stdio.h>
#include <conio.h>

int main(){
	printf("Kullanicinin girecegi 4*4 luk matrisi ve transpozunu(tersini) ekrana yazdiran program.\n");
	printf("===============================================================\n\n");
	
	int sayilar[4][4];
	int i,j,temp;
	
	for(i = 0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d. satir %d. sutundaki sayiyi giriniz: ", i+1,j+1);
			scanf("%d", &sayilar[i][j]);
		}
	}
	
	
	
	printf("\nMatrix\n");
	for(i = 0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ", sayilar[i][j]);
		printf("\n");
	}

	
	printf("\nTranspozu\n");
	for(i = 0;i<4;i++)
	{
		for(j=0;j<4;j++)
			printf("%d ", sayilar[j][i]);
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
}
