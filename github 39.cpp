#include<stdio.h>
int main()
{

    int num;    
    printf(" Enter the number");
    scanf("%d",&num);
    if (num&1==0)
    printf("\n after toggling %d",num|1);
    else
    printf("\n after toggling %d",num^1); 
    return(0);
}
