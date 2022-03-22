#include <stdio.h>
#include <conio.h>

int main(){
	printf("Girilen kelimenin karakter sayisini hesaplayan program.\n");
	printf("================================================ \n\n");
	
	char kelime[25];
	int index = 0;
	
	printf("Bir kelime giriniz(Max 25 karakter): ");
	gets(kelime);
	
	while(kelime[index] != '\0')
		index++;
		
	printf("\nGirilen kelime (%s), %d karakter uzunlugundadir.\n",kelime,index);
	
	getch();
}
