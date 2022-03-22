#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	printf("Kullanici tarafindan girilen bir metnin tersini veren program.\n");
	printf("============================================\n\n");
	
	char cumle[100];
	int length,i;
	
	printf("Bir Metin giriniz: ");
	gets(cumle);
	
	length = strlen(cumle);
	
	printf("Girdiginiz Metnin Tersi:\n");
	for(i = length -1;i >=0;i--)
		printf("%c", cumle[i]);
	
	
	
	
	
	
	
	
	
	
	getch();
}
