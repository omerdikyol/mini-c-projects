#include <stdio.h>
#include <conio.h>
#include <stdbool.h>

int main(){
	printf("Girilen 3*3 matrisin simetrik olup olmadigini bulan program.\n");
	printf("===============================================================\n\n");
	
	int sayilar[3][3];
	int i,j;
	bool simetrik = true;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d. satir %d. sutundaki sayiyi giriniz: ", i+1,j+1);
			scanf("%d", &sayilar[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if (i!=j)
			{
				if (sayilar[i][j] != sayilar[j][i])
					simetrik = false;
					break;
			}
		}
	}
	
	printf("\nGirilen Matrix:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			printf("%d ", sayilar[i][j]);
		printf("\n");
	}
	
	
	if (simetrik == true)
		printf("\nGirilen Matrix Simetrik.");
	else
		printf("\nGirilen Matrix Simetrik degil.");
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	getch();
}
