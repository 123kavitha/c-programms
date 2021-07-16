#include <stdio.h>
 int main()
{
  // declare varaible
  float num1, num2, num3;
  float sum, avg;
  
  // take inputs
  printf("Enter three Numbers: ");
  scanf("%f %f %f,&num1, &num2, &num3");
  
  // calcuclate sum
  sum = num1 + num2 + num3;
  // calcuclate average
  avg = sum / 3;
  // display entered numbers 
  printf("Entered numbers are: %.2f, %.2f and %.2f\n",
           num1, num2, num3);
		   
  // dispaly sum and average 
  printf("Sum=%.2f\n", sum);
  printf("Average=%.2f\n",avg);
  return(0);
  	   	
}
  
