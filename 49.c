#include <stdio.h>
#include <conio.h>

int main(){
	printf("10 karaktere kadar bir kelime girilmesini isteyen ve ekrana yazdiran program.\n");
	printf("==========================================\n\n");
	
	char kelime[10];
	printf("Kelimeyi giriniz: ");
	gets(kelime);
	kelime[10] = '\0';
	
	printf("\nGirdigin kelime: %s\n", kelime);
	
	getch();
}
