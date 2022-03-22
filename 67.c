#include <stdio.h>
#include <conio.h>

struct zaman
{
	int saat,dakika,saniye;
};


int main(){
	printf("Kullanici tarafindan girilen iki zaman diliminin toplamini veren program.\n");
	printf("================================================================\n\n");
	
	struct zaman z1,z2,toplam;
	
	printf("1.Zamanin\n");
	printf("Saati: ");
	scanf("%d", &z1.saat);
	printf("Dakikasi: ");
	scanf("%d", &z1.dakika);
	printf("Saniyesi: ");
	scanf("%d", &z1.saniye);
	
	printf("2.Zamanin\n");
	printf("Saati: ");
	scanf("%d", &z2.saat);
	printf("Dakikasi: ");
	scanf("%d", &z2.dakika);
	printf("Saniyesi: ");
	scanf("%d", &z2.saniye);
	
	toplam.saat = z1.saat + z2.saat;
	toplam.dakika = z1.dakika + z2.dakika;
	toplam.saniye = z1.saniye + z2.saniye;
	
	while(toplam.dakika >= 60){
		toplam.saat ++;
		toplam.dakika -= 60;
	}
	
	while(toplam.saniye >= 60){
		toplam.dakika ++;
		toplam.saniye -= 60;
	}
	
	printf("Girilen Zamanlarin Toplami:\n");
	printf("%d Saat %d Dakika %d Saniye\n",toplam.saat,toplam.dakika,toplam.saniye);
	
	getch();
}
