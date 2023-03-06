#include<stdio.h>

#define SIZE 1000


int main()
{

	char str1[SIZE];
	char str2[SIZE];
	char str3[SIZE];
	int len = 0;
	printf("Enter the first string: ");
	scanf("%s", str1);
	printf("Enter the second string: ");
	scanf("%s", str2);

	/*for (int i = 0; str1[i] != '\0'; i++)
	{
		len++;
	}
	for (int i = 0; str2[i] != '\0'; i++)
	{
		str1[len++] = str2[i];
	}
	str1[len] = '\0';
	printf("%s", str1);*/
	for (int i = 0; str1[i] != '\0'; i++)
	{
		str3[i] = str1[i];
		len++;
	}
	for (int i = 0; str2[i] != '\0'; i++)
	{
		str3[len++] = str2[i];
	
	}
	str3[len] = '\0';

	printf("%s", str3);






}
