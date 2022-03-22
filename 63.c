#include <stdio.h>
#include <conio.h>

long int faktoriyel(int num){
	int i,result = 1;
	
	for(i=1;i<=num;i++)
		result *= i;
	
	return result;
}

int main(){
	printf("Girilen bir sayinin faktoriyelini fonksiyon yardimiyla hesaplayan program.\n");
	printf("====================================================\n\n");
	
	printf("5! = %d\n", faktoriyel(5));
	printf("6! = %d\n", faktoriyel(6));
	printf("11! = %d\n", faktoriyel(11));
	
	getch();
}
