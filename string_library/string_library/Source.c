#include<stdio.h>
#include<string.h>



#define SIZE 1000





int main()
{
	char str1[SIZE];
	char str2[SIZE];
	printf("Enter the first string: ");
	scanf("%s", str1);
	printf("Enter the second string: ");
	scanf("%s", str2);
	int length = strlen(str1);
	printf("Length of the first string: %d\n", length);

	strcat(str1, str2);
	printf("str1: %s\nstr2: %s\n\n", str1, str2);

	strcpy(str1, str2);
	printf("str1: %s\nstr2: %s\n", str1, str2);




}