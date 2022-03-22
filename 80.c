#include <stdio.h>
#include <conio.h>

int main(){
	printf("Kullanicinin girecegi sayilari 'Shell Sort' siralama algoritmasi kullanarak siralayan program.\n");
	printf("==============================================================================================\n\n");
	
	shell_sort();
		
	getch();
}

void shell_sort(){
	int length;
	int i,j,temp,gap;
	
	printf("Listenin uzunlugunu giriniz: ");
	scanf("%d", &length);
	
	int array[length];
	
	for(i=0;i<length;i++)
	{
		printf("Bir sayi giriniz: ");
		scanf("%d", &array[i]);
	}
	
	printf("\nListenin 'Shell Sort' algoritmasi onceki hali: \n");
	for(i=0;i<length;i++)
		printf("%d, ", array[i]);
	
	for(gap = length/2; gap > 0 ;gap /= 2)
	{
		for(i = gap;i < length; i++)
		{
			temp = array[i];
			for(j = i;j>=gap && array[j-gap] > temp; j -= gap)
			{
				array[j] = array[j-gap];
			}
			array[j] = temp; 
		}
	}
	
	printf("\n\nListenin 'Shell Sort' algoritmasi sonraki hali: \n");
	for(i=0;i<length;i++)
		printf("%d, ", array[i]);
	
}
