#include <stdio.h>
#include <conio.h>

int main(){
	printf("Pointer kullanarak iki sayinin toplamini ve farkini veren program\n");
	printf("=================================================================\n\n");
	
	int num1=30,num2=50;
	
	int *ptr1,*ptr2;
	
	ptr1 = &num1;
	ptr2 = &num2;
	
	printf("Num1 ve Num2 (Pointer ile) = %d ve %d\n", *ptr1,*ptr2);
	
	printf("Num2 - Num1 = %d\n", *ptr2 - *ptr1);
	printf("Num2 + Num1 = %d\n", *ptr2+*ptr1);
	
	
	
	
	
	
	
	
	
	
	
	getch();
}
