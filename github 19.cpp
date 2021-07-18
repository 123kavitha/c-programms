#include <stdio.h>
int main()
{
	int num;
	printf("enter a number: ");
	scanf("%d", &num);
	
	printf("the digit in one's place of an integer is:%d",num%10);
	
	return(0);
}
