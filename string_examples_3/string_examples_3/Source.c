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
	int counter = 1;
	printf("Enter a sentences: ");
	string_gets(str);
	
	printf("%s", str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			counter++;
	}
	printf("\nThe number words: %d", counter);




}