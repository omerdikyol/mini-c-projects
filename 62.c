#include <stdio.h>
#include <conio.h>

void carpim_tablosu(int num){
	int i;
	printf("\n");
	for(i=1;i<10;i++)
		printf("%d * %d = %d  ", i,num,i*num);
	
	
}


int main(){
	printf("Girilen bir sayinin fonksiyon kullanilarak carpim tablosunu yazdiran program.\n");
	printf("=================================================\n");
	
	carpim_tablosu(8);
	carpim_tablosu(3);
	
	
	getch();
}
