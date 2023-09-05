#define  _CRT_SECURE_NO_WARNINGS



#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"my_lib.h"


#define SIZE                 20





int main()
{
	int a[SIZE];

	randomize();


	set_array_random(a, SIZE);
	print_array(a, SIZE);


	for (int i = 0; i < SIZE; ++i)
		
	{
		int j;
		for (j = 0; j < SIZE; ++j)
		{
			if (a[i] == a[j] && i != j)
				break;
		}

		if (j == SIZE)
		{
			printf("%3d ", a[i]);
		}
	}
}