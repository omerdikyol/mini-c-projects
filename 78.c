#include <stdio.h>
#include <conio.h>

int main(){
	printf("Kullanicinin girecegi sayilari 'Bubble Sort' siralama algoritmasi kullanarak siralayan program.\n");
	printf("===============================================================================================\n\n");
	
	bubble_sort();
	
	getch();
	
}

void bubble_sort(){
	
	int length;
	int i,j,temp;
	
	printf("Listenin boyutunu giriniz: ");
	scanf("%d", &length);
	
	int x[length];
	
	for(i=0;i<length;i++)
	{
		printf("Bir sayi giriniz: ");
		scanf("%d", &x[i]);
	}	
	
	printf("\nListenin 'Bubble Sort' algoritmasi onceki hali: \n");
	for(i=0;i<length;i++)
		printf("%d, ", x[i]);
		
	
	
	for(i=0;i<length-1;i++)
	{
		for(j=i+1;j<length;j++)
		{
			if(x[i] > x[j])
			{
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
	
	printf("\n\nListenin 'Bubble Sort' algoritmasi sonraki hali: \n");
	for(i=0;i<length;i++)
		printf("%d, ", x[i]);
	
	
	
	
	
}
