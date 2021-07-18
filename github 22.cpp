#include <stdio.h>
int main()
{
	int x = 10, y = 5;
	
	console.WriteLine("Before swap a="+a+"b="+b);
	x = x + y; // x now becomes 15
	y = x - y; // y becomes 10
	x = x - y; // x becomes 5
	console.WriteLine("after swap a= "+a+"b="+b");
	return(0);
}
