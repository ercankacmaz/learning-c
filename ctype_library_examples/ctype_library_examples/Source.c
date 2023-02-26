#include<stdio.h>
#include<ctype.h>



int main()
{
	int c;
	printf("Enter a character: ");
	c = getchar();
	if (isupper(c))
	{
		printf("%c is an upper character.\n", c);
		c = tolower(c);
		printf("%c", c);
	}
	else
	{
		printf("%c is not an upper character.\n", c);
		c = toupper(c);
		printf("%c", c);
	}



}