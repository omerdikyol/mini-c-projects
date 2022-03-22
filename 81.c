#include <stdio.h>
#include <conio.h>
#include <math.h>

long fact(int num)
{
    long int fact = 1;

    while(num > 0)
    {
        fact *= num;
        num--;
    }

    return fact;
}

unsigned long permutation(int n, int r)
{
    return fact(n) / fact(n-r);
}

unsigned long combination(int n, int r)
{
    return permutation(n, r) / fact(r);
}



int main(){
	printf("Maximum 14 basamakli Pascal ucgenini ekrana yazdiran program.\n");
	printf("==============================================================\n\n");
	
	int line,i,j,bosluk;
	
	printf("Basamak sayisini giriniz: ");
	scanf("%d", &line);
	
	bosluk = line-1;
	
	for(i=0;i<line;i++)
	{
		for(j=0;j<bosluk-i;j++)
		{
			printf(" ");
		}
		
		for(j=0;j<i+1;j++)
		{
			printf("%i ", combination(i,j));
		}
		
		printf("\n");
	}
	
	
	
	
	getch();
}

