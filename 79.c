#include <stdio.h>
#include <conio.h>

int main(){
	printf("Kullanicinin girecegi sayilari 'Selection Sort' siralama algoritmasi kullanarak siralayan program.\n");
	printf("==================================================================================================\n\n");
	
	selection_sort();
	
	getch();
}

void selection_sort(){
	
	int length;
	int i,j,min,temp;
	
	printf("Listenin uzunlugunu giriniz: ");
	scanf("%d", &length);
	
	int array[length];
	
	for(i=0;i<length;i++)
	{
		printf("Bir sayi giriniz: ");
		scanf("%d", &array[i]);
	}
	
	printf("\nListenin 'Selection Sort' algoritmasi onceki hali: \n");
	for(i=0;i<length;i++)
		printf("%d, ", array[i]);
	
	for(i=0;i<length-1;i++)
	{
		min = i;
		for(j=i+1;j<length;j++)
		{
			if (array[j] < array[min])
				min = j;
		}
		
		temp = array[i];
		array[i] = array[min];
		array[min] = temp; 
	}
	
	printf("\n\nListenin 'Selection Sort' algoritmasi sonraki hali: \n");
	for(i=0;i<length;i++)
		printf("%d, ", array[i]);
	
	
	
}
