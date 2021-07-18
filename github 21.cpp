#include <stdio.h>
int multiplyTen(int n)
{
	return (n<<1) + (n<<3);
}
// Driver program to run the case
int main()
{
	int n = 50;
    cout << multiplyTen(n);
	
	return(0);
}
