#include<stdio.h>

#define SIZE 100

int main()
{
	char str[SIZE];

	printf("Enter the string: ");
	scanf("%s", str);
	int len = 0;

	for (int i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	for (int i = 0; i < (len / 2); i++)
	{
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;

	}
	printf("%s", str);



	return 0;

}