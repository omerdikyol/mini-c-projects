#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	printf("Girilen bir metnin harflerini alfabetik siraya gore siralayan program.\n");
	printf("===================================\n\n");
	
	char cumle[100];
	int i,j,length,temp;
	
	printf("Bir metin giriniz: ");
	gets(cumle);
	
	length = strlen(cumle);
	
	for(i = 0;i<length - 1;i++)
	{
		for(j=i+1;j<length;j++)
		{
			if(cumle[i] > cumle[j])
			{
				temp = cumle[i];
				cumle[i] = cumle[j];
				cumle[j] = temp;
			}
		}
	}
	
	printf("Harflerin alfabetik siralamasi:\n");
	
	for(i = 0;i<length;i++)
		printf("%c",cumle[i]);

	getch();
}
