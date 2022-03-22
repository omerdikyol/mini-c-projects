#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    float num1,num2;
    char bal[10];
    char devam_mi;
    
    do
	{
		printf("Number 1: ");
		scanf("%f", &num1);
		
		printf("Number 2: ");
		scanf("%f", &num2);
		
		printf("Operation (+,-,*,/): ");
		scanf("%c", &bal);
		
		switch(bal)
		{
			case '+':
				printf("%f + %f = %f", num1,num2,num1+num2);
				break;
			case '-':
				printf("%f - %f = %f", num1,num2,num1-num2);
				break;
			case '*':
				printf("%f * %f = %f", num1,num2,num1*num2);
			case '/':
				if(num2 != 0){
				
					printf("%f / %f = %f", num1,num2,num1/num2);
					break;
			}
				else{	
					printf("2nd number cannot be 0.");
					break;
			}
			default:
				printf("Syntax error.");
				
			printf("Keep Calculating? (Y/N): ");
			scanf("%c", &devam_mi);
		}
    	
	}while((devam_mi == 'Y') || (devam_mi == 'y'));





    getch();
}
