#include <stdio.h>
#include <conio.h>
#include <math.h>

int main(){
	printf("Ýkinci dereceden bilinmeyen bir denklemin koklerini bulan program.\n");
	printf("==================================================================\n\n");
	
	float x1,x2;
	int a,b,c,delta;
	
	printf("Denklem = A*x^2 + B*x + C\n");
	printf("\nA degerini giriniz: ");
	scanf("%d",&a);
	printf("B degerini giriniz: ");
	scanf("%d", &b);
	printf("C degerini giriniz: ");
	scanf("%d", &c);
	
	printf("\nDenklem = %d*x^2 + (%d)*x + (%d)\n",a,b,c);
	
	delta = pow(b,2) - 4*a*c;
	
	x1 = (-b + sqrt(delta))/(2*a);
	x2 = (-b - sqrt(delta))/(2*a);
	
	if (delta > 0)
	{
		printf("\nDenklemin iki koku vardir.\n");
		printf("1.Kok: %f\n",x1);
		printf("2.Kok: %f\n",x2);
	}
	
	else if(delta == 0)
	{
		printf("\nDenklem bir ortak koku vardir.\n");
		printf("Ortak kok: %f\n",x1);
	}
	
	else if(delta < 0)
		printf("\nDenklemin rasyonal sayilarda koku yoktur.\n");
	
	
	getch();
}
