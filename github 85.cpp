#include<stdio.h>
#include<string.h>
int main()
{
	char Mstring[50],char_ch;
	int i;
	printf("enter the multiple line string ");
	i=0;
	int char_='#';
  while(char_!='$')
  {
  	char_=getchar();
  	Mstring[i]=char_;
  	i++;
  }	
  Mstring[--i]='\0';
  printf("\n\n the string is \n\n");
  puts(Mstring);
}
