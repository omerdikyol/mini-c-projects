#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	printf("Ayri ayri girilen adi ve soyadi bilgilerini birlestirerek tam adini gosteren program.\n");
	printf("=================================================\n\n");
	
	char ad[25];
	char soyad[25];
	char tam_ad[25];
	
	printf("Adi giriniz: ");
	gets(ad);
	
	printf("Soyadi giriniz: ");
	gets(soyad);
	
	strcat(tam_ad,ad);
	strcat(tam_ad," ");
	strcat(tam_ad,soyad);
	
	printf("\nAd Soyad: %s\n", tam_ad);
		
	getch();
}
