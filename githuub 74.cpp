#include<stdio.h>
#include<math.h>
int main()
{
	int n,sum,noip;
	printf("enter the numbers");
	noip=0;
	sum=0;
	do
	{
		scanf("%d",&n);
		if(n<0)
		sum=sum+n;
		noip=noip+1;
		
	}
	while(noip<10);
	printf("the sum of negative numbers =%d",sum);
	return(0);
}

	
	
