#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	printf("Kullanici tarafinden girilen metni buyuk harflere ceviren program.\n");
	printf("==================================\n\n");
	
	char cumle[10];
	int i,length;
	
	printf("Bir metin giriniz(No Turkce karakter[useniom]): ");
	gets(cumle);
	
	length = strlen(cumle);
	
	while (cumle[i] != '\0')
	{
		if(cumle[i] >= 'a' && cumle[i] <= 'z' && cumle[i] != 'i')
			cumle[i] -= 32;	
		i++;
	}
	
	printf("Buyuk harflerle: %s\n", cumle);
	getch();
}
