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

int elegan(char* str1, char* str2)
{
	int len1 = 0, len2 = 0;
	int cnt = 0;
	
	for (int i = 0; str1[i] != '\0'; i++)
	{
		len1++;
	}
	for (int i = 0; str2[i] != '\0'; i++)
	{
		len2++;
	}

	if (len1 == len2)
	{
		for (int i = 0; i < len1; i++)
		{
			for (int j = 0; j < len1; j++)
			{
				if (str1[i] > str1[j])
				{
					int n = str1[i];
					str1[i] = str1[j];
					str1[j] = n;
				}
			}

		}
		for (int i = 0; i < len2; i++)
		{
			for (int j = 0; j < len2; j++)
			{
				if (str2[i] > str2[j])
				{
					int n = str2[i];
					str2[i] = str2[j];
					str2[j] = n;
				}
			}

		}
		for (int i = 0; i < len1; i++)
		{
			if (str1[i] == str2[i])
				cnt++;
		}
		if (cnt == len1)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}




int main()
{
	char str1[SIZE];
	char str2[SIZE];
	printf("Enter the first string: ");
	string_gets(str1);
	printf("Enter the second string: ");
	string_gets(str2);
	

	int n = elegan(str1, str2);
	if (n)
	{
		printf("The strings are elegan.");
	}
	else
		printf("The strings are not elegan.");
	}