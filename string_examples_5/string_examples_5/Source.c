#include<stdio.h>

#define SIZE 1000


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

int vowel(const char* str)
{
	int vowel_cnt = 0;
	while (*str != '\0')
	{
		switch (*str)
		{
		case 'a':
		case 'e':
		case 'i':
		case 'u':
		case 'o':
			vowel_cnt++;
		}
		str++;
	}
	return vowel_cnt;
}

int main()
{
	char str[SIZE];
	int upper = 0;
	int lower = 0;
	int num = 0;
	int priv = 0;

	printf("Enter a string: ");
	string_gets(str);
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 'Z' && str[i] >= 'A')
			upper++;
		else if (str[i] <= 'z' && str[i] >= 'a')
			lower++;
		else if (str[i] <= '9' && str[i] >= '0')
			num++;
		else
			priv++;
	}
	printf("Number of uper case leter character number: %d\n", upper);
	printf("Number of lower case leter character number: %d\n", lower);
	printf("Number of number character number: %d\n", num);
	printf("Number of private character number: %d\n", priv);

	printf("Number of vowel: %d", vowel(str));




}