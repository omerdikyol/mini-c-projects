#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    int satir_sayisi,yildiz_sayisi = 1,bosluk = 0,i,j;
    printf("How many rows is the pyramid?: ");
    scanf("%d", &satir_sayisi);
    bosluk = 2*(satir_sayisi-1);

    for(i = 0; i<satir_sayisi; i++)
    {
        for (j = 0;j < bosluk; j++)
            printf(" ");
        for (j = 0;j < yildiz_sayisi;j++)
            printf("* ");
        bosluk -= 2;
        yildiz_sayisi += 2;
        printf("\n");
    }
	
	getch();
}
