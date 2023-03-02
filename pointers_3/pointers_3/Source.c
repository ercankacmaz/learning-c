#include<stdio.h>





int main()
{
	int arr[5] = { 2,4,6,8,10 };
	int* parr = &arr[0]; // int* parr = a; == int* parr = a;
	//parr += 2;
	//printf("%d\n", *parr);
	//printf("Adress of a[0]: %p, value of a[0]: %d\n", parr, *parr);

	/*parr += 1;
	printf("Adress of a[1]: %p, value of a[0]: %d\n", parr, *parr);
	parr += 1;
	printf("Adress of a[2]: %p, value of a[0]: %d\n", parr, *parr);
	parr += 1;
	printf("Adress of a[3]: %p, value of a[0]: %d\n", parr, *parr);
	parr += 1;
	printf("Adress of a[4]: %p, value of a[0]: %d\n", parr, *parr);*/

	for(int i = 0; i < 5; i++)
	{
		printf("Adress of a[%d]: %p, value of a[%d]: %d\n", i, parr, i, *parr);
		parr += 1;
	}


	printf("\n\nPointer comparasion.\n\n\n");

	int* pc = arr;
	int* pc1 = arr + 2;
	if (pc + 2 == pc1)
	{
		printf("The addresses are the same.\n");
		printf("pc + 2 = %p\npc1 = %p\n\n", pc + 2, pc1);
	}
	





}