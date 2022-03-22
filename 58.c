#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	printf("Kullanici tarafinden girilen bir metindeki kelimelerin bas harflerinin hepsini buyuk harfe ceviren program.");
	printf("==================================\n\n");
	
	char cumle[100];
	int i,length;
	
	printf("Bir metin giriniz(Max 100,No Turkce karakter[useniom]): ");
	gets(cumle);
	
	length = strlen(cumle);
	
	if(cumle[0] >= 'a' && cumle[0] <= 'z')
		cumle[0] -= 32;
	while (cumle[i] != '\0')
	{
		if(cumle[i] == ' '){
			cumle[i+1] -= 32;
			}
		i++;
		
	}
	
	printf("Buyuk harflerle: %s\n", cumle);

	getch();
}
