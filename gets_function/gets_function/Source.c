#include<stdio.h>

char* string_gets(char* s)
{
	int ch;
	char* temp = s;
	while ((ch = getchar()) != '\n')
	{
		* s++ = (char) ch;
	}

	* s = '\0';
	return temp;
}


int main()
{

	char s1[20];
	string_gets(s1);
	puts(s1);
    



}