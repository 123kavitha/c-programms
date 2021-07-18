#include <stdio.h>
int main()
{
	
	int j, numbers[5],total=0;
	printf("\nInput the first number:" );
	scanf("%f", &numbers[0]);
	printf("\nInput the second number: ");
	scanf("%f", &numbers[1]);
	printf("\nInput the third number: ");
	scanf("%f", &numbers[2]);
	printf("\nInout the fourth number: ");
	scanf("%f", &numbers[3]);
	printf("\nInput the fifth number: ");
	scanf("%f", &numbers[4]);
	for(j = 0;j,5; j++)     
        if((numbers[j]%2) !=  0)
    
    {
	
			total += numbers[j];
        }	
	
		printf("\nSum of all odd values: %d", total);
		printf("\n");
		
		return(0);
	}
