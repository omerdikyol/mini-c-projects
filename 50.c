#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	printf("Girilen iki kelimeden hangisinin uzun oldugunu bulan program.\n");
	printf("==========================================\n\n");
	
	char kelime1[25];
	char kelime2[25];
	int count1 = 0,count2 = 0;
	
	printf("1. Kelimeyi Giriniz: ");
	gets(kelime1);
	
	printf("2.Kelimeyi Giriniz: ");
	gets(kelime2);
	
	while (kelime1[count1] != '\0')
		count1++;
	
	while (kelime2[count2] != '\0')
		count2++;
		
	if (count1 > count2)
		printf("\n1.Kelime (%s), 2.Kelimeden (%s) daha uzundur.\n",kelime1,kelime2);
	else if (count2 > count1)
		printf("\n1.Kelime (%s), 2.Kelimeden (%s) daha kisadir.\n",kelime1,kelime2);
	else if (count1 == count2)
		printf("\n1,Kelime (%s), 2.Kelimeye (%s) uzunluk olarak esittir.\n",kelime1,kelime2);
	
	getch();
}
