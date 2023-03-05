#include<stdio.h>
#include <string.h>

void gets(const char* s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		putchar(*s++);
	}
	putchar('\n');
}


int main()
{
	char name[10];
	printf("Enter name: ");
	scanf_s("%s", name);

	//gets(name);
}