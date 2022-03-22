#include <stdio.h>
#include <conio.h>

int main(){
	printf("Kullanicinin girecegi 3*3 luk iki matrisi toplayip sonucu ekrana yazdiran program.\n");
	printf("===============================================================\n\n");
	
	int sayilar1[3][3];
	int sayilar2[3][3];
	int i,j,temp;
	
	printf("\n1. Matrix \n");
	for(i = 0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d. satir %d. sutundaki sayiyi giriniz: ", i+1,j+1);
			scanf("%d", &sayilar1[i][j]);
		}
	}
	
	printf("\n2. Matrix\n");
	for(i = 0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d. satir %d. sutundaki sayiyi giriniz: ", i+1,j+1);
			scanf("%d", &sayilar2[i][j]);
		}
	}
	
	printf("\n1.Matrix\n");
	for(i = 0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ", sayilar1[i][j]);
		printf("\n");
	}
	
	printf("\n2. Matrix\n");
	for(i = 0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ",sayilar2[i][j]);
		printf("\n");
	}
	
	printf("\nMatrixlerin toplami\n");
	for(i = 0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ", sayilar1[i][j] + sayilar2[i][j]);
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
}
