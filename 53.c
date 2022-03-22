#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	printf("Girilen kelime icerisindekki sesli harf sayisini bulan program.\n");
	printf("================================================ \n\n");
	
	char kelime[25];
	int sayi = 0,i,uzunluk;
	char harf;
	
	printf("Bir kelime giriniz(Max 25 karakter,kucuk harflerle, turkce karakter olmadan)[cunku usendim 25 tane if acmaya]: ");
	gets(kelime);
	
	uzunluk = strlen(kelime);
	
	for(i = 0;i<uzunluk;i++){
		harf = kelime[i];
		if(harf == 'a' || harf == 'e' || harf == 'i' || harf == 'o' || harf == 'u')
			sayi++;
	}
		
	printf("\nGirilen kelimede (%s), %d adet sesli harf vardir.\n",kelime,sayi);
	
	getch();
}
