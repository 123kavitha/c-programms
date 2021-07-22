#include<stdio.h>
#include<string.h>
int main()
{

    char a;
	printf("enter the  value");
	scanf("%c",&a);
	if(65<=a<=90||97<=a<=122)
	printf("given value is alphabet ascii value=%d",a);
    return(0);
}
