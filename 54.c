#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	printf("Girilen cumle icerisinde kullanicinin istedigi karakterden kac tane oldugunu bulan program.\n");
	printf("=========================================================================\n\n");
	
	char cumle[100];
	char karakter;
	int count = 0,length,i;
	
	printf("Bir cumle yaziniz: ");
	gets(cumle);
	length = strlen(cumle);
	
	
	printf("Hangi karakteri aramak istersiniz: ");
	//getchar();                                              // WTF?
	scanf("%c", &karakter);
	
	for(i=0;i<length;i++)
	{
		if (cumle[i] == karakter)
			count++;
	}
	
	printf("\nYazdigin cumlede %d adet %c var.\n", count,karakter);
	
	
	
	
	
	
	getch();
}
