#include<stdio.h>
#include<string.h>
int main()
{
	char Mstring[50],char_1,w;
	int i,ans;
	printf("enter the multiple line string: ");
	i=0;
	l=0;
	w=0;
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
  printf("\nThe number of charecters %d",i+1);
  for(i=0;Mstring[i]!='\0';i++)
  {
  	      if(Mstring[i]=='\n')
  	      'l++';
  	      if(Mstring[i]=='||'Mstring[i]=='\n' ||Mstring[i]=='\0')
  	      w++
 }
 printf("\n The number of lines =%d",l+1);
 printf("\n The number of words =%d",w);
}
