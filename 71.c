#include <stdio.h>
#include <conio.h>

int main(){
	printf("Girilen bir sayinin pointer kullanarak degerini ve adresini veren program.\n");
	printf("=================================================\n\n");
	
	int sayi;
	int *ptr = &sayi;
	
	printf("Bir sayi giriniz: ");
	scanf("%d", &sayi);
	
	printf("Girdiginiz sayinin degeri: %d\n",sayi);
	printf("Girdiginiz sayinin adresi: %x\n", &sayi);
	
	printf("Girdiginiz sayinin degeri(Pointer ile): %d\n", *ptr);
	printf("Girdiginiz sayinin adresi(Pointer ile): %x\n", ptr);
	
	
	
	
	
	
	
	
	
	getch();
}
