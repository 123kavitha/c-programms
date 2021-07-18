#include<stdio.h>
#include<math.h>
int main()
{
	int num,res;
	printf("Enter the no of integers sum ");
	scanf("%d", &num);
	res=num*(num+1)/(2);
	printf("result=%d",res);
	
	return(0);
}
