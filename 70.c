#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	printf("Girilen bir sayinin rakamlarini sirasiyla harlendirerek ekrana yazdiran program.\n");
	printf("========================================================\n\n");
	
	
	char sayi[10];
	int uzunluk,i,j;
	
	printf("Bir sayi giriniz: ");
	scanf("%s", &sayi);
	
	uzunluk = strlen(sayi);
	
	for(i=0;i<uzunluk;i++)
	{
		switch(sayi[i])
		{
			case '0':
				printf(" Sifir ");
				break;
			case '1':
				printf(" Bir ");
				break;
			case '2':
				printf(" Iki ");
				break;
			case '3':
				printf(" Uc ");
				break;
			case '4':
				printf(" Dort ");
				break;
			case '5':
				printf(" Bes ");
				break;
			case '6':
				printf(" Alti ");
				break;
			case '7':
				printf(" Yedi ");
				break;
			case '8':
				printf(" Sekiz ");
				break;
			case '9':
				printf(" Dokuz ");
				break;
		}
		
	}
	
	
	
	
	
	getch();
}
