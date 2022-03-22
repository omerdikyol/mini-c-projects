#include <stdio.h>
#include <conio.h>

void asal(int num){
	int i;
	char asal = 'E';
	
	for(i=2;i<num;i++)
	{
		if (num % i == 0)
		{
			asal = 'H';
			break;
		}
	}
	
	if (num != 1)
	{
		if (asal == 'E')
			printf("\n%d sayisi asal bir sayidir.",num);
		else
			printf("\n%d sayisi asal bir sayi degildir.",num);
	}
	else
		printf("\n1 sayisi asal bir sayidir.");
}

int main(){
	printf("Kullanici tarafindan girilen bir sayinin asal olup olmadigini fonksiyon kullanarak hesaplayan program.\n");
	printf("=======================================================\n\n");
			
	asal(17);
	asal(21);
	asal(1);
	asal(2);
		
	getch();
}


