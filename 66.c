#include <stdio.h>
#include <conio.h>
struct araba
{
	char model[25];
	float fiyat;
};

struct kisi
{
	char ad[25];
	int yas;
};


int main(){
	printf("Bir kisinin adi yasi arabasinin modeli ve fiyatini structure yapisina gore sorarak bunlari ekrana yazdiran program/n");
	printf("============================================================\n\n");
	
	struct kisi k;
	struct araba a;
	
	printf("\nKisinin: ");
	printf("\nAdi: ");
	gets(k.ad);
	printf("\nYasi: ");
	scanf("%d", &k.yas);
	
	printf("\n\nArabanin: ");
	printf("\nFiyati: ");
	scanf("%f", &a.fiyat);
	printf("\nModeli: ");
	scanf("%s", &a.model);
	
	printf("\n\n%d yasindaki %s adli kisinin %.3f degerindeki %s model arabasi vardir.", k.yas,k.ad,a.fiyat,a.model);
}
