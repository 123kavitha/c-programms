#include<stdio.h>
int main()
{

    int a,b;    
    printf(" Enter the number");
    scanf("%d",&a);
    b=a|1;
    printf("\n after setting LSB a=%d",b); 
    return(0);
}
