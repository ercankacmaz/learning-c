#include<stdio.h>





int main()
{

	char* pname = "ercan";
	printf("%p", pname);
	printf("\n%p", "ercan");
	printf("\n");
	for (int i = 0; i < 6; i++)
	{
		putchar(*pname++);
	}
	putchar('\n');
  



}