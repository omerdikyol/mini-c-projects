#include <stdio.h>
#include <conio.h>
#include <string.h>

struct kitap 
{
	char ad[50];
	char yazar[25];
	int fiyat;
	int sayfa;
	char konu[25];
	char yayinevi[25];
};

struct kitap b[100];

int i,j,sayac = 0,secim = 0;

void print_liste()
{
	for(i=0;i<sayac;i++)
	{
		printf("\n%d. Kitap\n",i+1);
		printf("Adi: %s\n", b[i].ad);
		printf("Yazari: %s\n", b[i].yazar);
		printf("Fiyati: %d\n", b[i].fiyat);
		printf("Konusu: %s\n", b[i].konu);
		printf("Sayfa Sayisi: %d\n", b[i].sayfa);
		printf("Yayinevi: %s\n", b[i].yayinevi);
		printf("\n");
	}
}

void bilgi_giris()
{
	char space;
	printf("Kac kitap gireceksiniz?: ");
	scanf("%d", &sayac);
	
	for(i=0;i<sayac;i++)
	{
		printf("\n%d. Kitabin:", i+1);
		printf("\nAdi: ");
		scanf("%c", &space);
		fgets(b[i].ad,50,stdin);
		//scanf("%s", &b[i].ad);		// Bir bosluk basip yazcan aga yapcak bir sey yok.
		printf("\nYazari: ");
		scanf("%c", &space);
		fgets(b[i].yazar,25,stdin);
		//scanf("%s", &b[i].yazar);
		printf("\nFiyati: ");
		scanf("%d", &b[i].fiyat);
		printf("\nKonusu: ");
		scanf("%c", &space);
		fgets(b[i].konu,25,stdin);
		//scanf("%s", &b[i].konu);	
		printf("\nSayfa Sayisi: ");
		scanf("%d", &b[i].sayfa);
		printf("\nYayinevi: ");
		scanf("%c", &space);
		fgets(b[i].yayinevi,25,stdin);
		//scanf("%s", &b[i].yayinevi);		
	}
}

void konu_sirala()
{
	char temp[25];
	int tempint;
	
	for(i=0;i<sayac-1;i++)
	{
		for(j = i+1;j<sayac;j++)
		{
			if (strcmp(b[i].konu,b[i].konu) == 0)
			{
				strcpy(temp,b[i].konu);
				strcpy(b[i].konu,b[j].konu);
				strcpy(b[j].konu,temp);
				
				strcpy(temp,b[i].ad);
				strcpy(b[i].ad,b[j].ad);
				strcpy(b[j].ad,temp);
				
				strcpy(temp,b[i].yazar);
				strcpy(b[i].yazar,b[j].yazar);
				strcpy(b[j].yazar,temp);
				
				strcpy(temp,b[i].yayinevi);
				strcpy(b[i].yayinevi,b[j].yayinevi);
				strcpy(b[j].yayinevi,temp);
				
				tempint = b[i].fiyat;
				b[i].fiyat = b[j].fiyat;
				b[j].fiyat = tempint;
				
				tempint = b[i].sayfa;
				b[i].sayfa = b[j].sayfa;
				b[j].sayfa = tempint;
			}
		}
	}
	print_liste();
}

void fiyat_sirala()
{
	char temp[25];
	int tempint;
	
	for(i=0;i<sayac-1;i++)
	{
		for(j = i+1;j<sayac;j++)
		{
			if (b[i].fiyat > b[j].fiyat)
			{
				strcpy(temp,b[i].konu);
				strcpy(b[i].konu,b[j].konu);
				strcpy(b[j].konu,temp);
				
				strcpy(temp,b[i].ad);
				strcpy(b[i].ad,b[j].ad);
				strcpy(b[j].ad,temp);
				
				strcpy(temp,b[i].yazar);
				strcpy(b[i].yazar,b[j].yazar);
				strcpy(b[j].yazar,temp);
				
				strcpy(temp,b[i].yayinevi);
				strcpy(b[i].yayinevi,b[j].yayinevi);
				strcpy(b[j].yayinevi,temp);
				
				tempint = b[i].fiyat;
				b[i].fiyat = b[j].fiyat;
				b[j].fiyat = tempint;
				
				tempint = b[i].sayfa;
				b[i].sayfa = b[j].sayfa;
				b[j].sayfa = tempint;
			}
		}
	}
	print_liste();
}

void konu_bul()
{
	char aranan[25];
	char bulundu = 'H';
	
	printf("Hangi konuda bir kitap ariyorsunuz?: ");
	scanf("%s", &aranan);
	
	for(i=0;i<sayac;i++)
	{
		if (strcmp(aranan,b[i].konu) == 0)
		{
			printf("\nAradiginiz Konudaki Kitap:\n");
			printf("Adi: %s\n", b[i].ad);
			printf("Yazari: %s\n", b[i].yazar);
			printf("Fiyati: %d\n", b[i].fiyat);
			printf("Konusu: %s\n", b[i].konu);
			printf("Sayfa Sayisi: %d\n", b[i].sayfa);
			printf("Yayinevi: %s\n", b[i].yayinevi);
			bulundu = 'E';		
		}	
	}
	if (bulundu == 'H')
		printf("Aradiginiz konuda bir kitap bulunamadi.\n");
}

void fiyat_bul()
{
	int aranan;
	char bulundu = 'H';
	
	printf("Hangi fiyatta bir kitap ariyorsunuz?: ");
	scanf("%d", &aranan);
	
	for(i=0;i<sayac;i++)
	{
		if (aranan == b[i].fiyat)
		{
			printf("\nAradiginiz Fiyattaki Kitap:\n");
			printf("Adi: %s\n", b[i].ad);
			printf("Yazari: %s\n", b[i].yazar);
			printf("Fiyati: %d\n", b[i].fiyat);
			printf("Konusu: %s\n", b[i].konu);
			printf("Sayfa Sayisi: %d\n", b[i].sayfa);
			printf("Yayinevi: %s\n", b[i].yayinevi);
			bulundu = 'E';	
		}	
	}
	if (bulundu == 'H')
		printf("Aradiginiz fiyatta bir kitap bulunamadi.\n");
}

void menu()
{
	printf("\n\nKutuphane Uyg.\n");
	printf("=====================\n\n");
	
	printf("Yapmak istediginiz islem icin islem numarasini giriniz.\n");
	printf("\n1. Kitaplari Konuya Gore Sirala.\n");
	printf("2. Kitaplari Fiyata Gore Sirala.\n");
	printf("3. Konu Arat.\n");
	printf("4. Fiyat Arat.\n");
	
	printf("\nYapmak istediginiz islem: ");
	scanf("%d", &secim);
	
	switch(secim)
	{
		case 1:
			konu_sirala();
			break;
		case 2:
			fiyat_sirala();
			break;
		case 3:
			konu_bul();
			break;
		case 4:
			fiyat_bul();
			break;
		default:
			printf("\nOyle bir secenek yok. Lutfen Tekrar Deneyiniz.\n\n");
			menu();
	}
	
}

int main(){
	printf("Kullanicinin girecegi  sayida kitabin adi,yazari,fiyati,konusu,sayasi ve yayinevini soran, bilgiler girildikten sonra bir menu araciligiyla siralama ve arama yapilmasina izin veren program.\n");
	printf("====================================================================================================================================================\n\n");
	
	bilgi_giris();
	menu();
	
	
	getch();
}

