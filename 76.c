#include <stdio.h>
#include <conio.h>

int main(){
	printf("Pointer ile degiskenin degerini hafizadaki adresinden okuyup ekrana yazdiran program.\n");
	printf("=====================================================================================\n\n");
	
	int num;												/* degisken tanimlamasi  */
	int *ptr;												/* int pointer          */
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &num);
	
	ptr = &num;												/* 'ptr' simdi i degiskeninin hafizadaki adresini aldi.  */
	
	printf("\nGirdiginiz sayi: %d\n",num);					/* Degiskenin degeri        */
	printf("Girdiginiz sayi(Pointer ile): %d", *ptr);		/*Degisken icin hafizada ayrilan adresinde bulunan deger*/
	
		
	getch();
}
