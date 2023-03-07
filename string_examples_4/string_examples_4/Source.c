#include<stdio.h>

#define SIZE 100

char* string_gets(char* s)
{
	int ch;
	char* temp = s;
	while ((ch = getchar()) != '\n')
	{
		*s++ = (char)ch;
	}
	*s = '\0';
	return temp;
}

int main()
{
	char str[SIZE];
	printf("Enter a string: ");
	string_gets(str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			putchar(str[i] + 32);

		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			putchar(str[i] - 32);
		}
		else
		{
			putchar(str[i]);
		}
	}



}