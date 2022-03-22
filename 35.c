#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>

int main(){
	
	printf("Program that lists the next 10 prime numbers if a number entered is a prime number.\n");
	printf("===================================================================================\n\n");
	
	int sayi,i,asal_count = 0;
	bool asal = true;
	bool asal2 = true;
	
	printf("Enter an integer: ");
	scanf("%d", &sayi);
	
	for(i = 2; i<sayi;i++)
	{
		if(sayi % i == 0)
			asal = false;
			break;
	}
	
	if (asal == true)
	{
		sayi++;
		while (asal_count < 10)
		{
			asal = true;
			
			for(i = 2; i<sayi;i++)
			{
				if(sayi % i == 0)
				{
					asal = false;
					break;
				}
			}
			if (asal == true)
			{
				printf("%d, ",sayi);
				asal_count++;
			}
		sayi ++;
		}	
	}
	
	getch();
}
