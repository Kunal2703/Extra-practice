#include <stdio.h>
#include <string.h>

int main()
{
  	char Str1[100];
  	int i;

  	printf("\n Please Enter a String to Convert into Lowercase :  ");
  	gets(Str1);

  	for (i = 0; Str1[i]!='\0'; i++)
  	{
  		if(Str1[i] >= 'A' && Str1[i] <= 'Z')
  		{
  			Str1[i] = Str1[i] + 32;
		}
  	}

  	printf("\n The given String in Lower Case = %s", Str1);

  	return 0;
}
