#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	printf("1 den 7 ye kadar olan sayilarin karesini ve karelerinin toplamini bulan program.\n");
	printf("================================================================================\n\n");
	
	int sonuc=0,i;
	
	for(i=1;i<8;i++)
	{
		printf("%d'nin karesi: %f\n", i, pow(i,2));
		sonuc += pow(i,2);
	}
	printf("\n1 den 7 ye kadar olan sayilarin karelerinin toplami: %d\n", sonuc);
	
	
	
	
	
	
	
	getch();
}
