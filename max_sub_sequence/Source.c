#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>


#define SIZE    200


int main()
{
	int a[SIZE];

	srand(time(NULL));
	
	for (int i = 0; i < SIZE; i++)
	{
		if (rand() % 2 == 0)
			a[i] = rand() % 5000;
		else
			a[i] = -(rand() % 5000);

	}

	for (int i = 0; i < SIZE; ++i)
	{
		printf("%5d ", a[i]);
		if (i && i % 10 == 0)
			printf("\n");
	}

	int sub_seq = 0;
	int l_sub_seq = a[0];
	

	for (int i = 0; i < SIZE; ++i)
	{
		for (int k = i; k < SIZE; ++k)
		{
			sub_seq += a[k];
			if (sub_seq > l_sub_seq)
				l_sub_seq = sub_seq;
		}

		sub_seq = 0;
	}

	printf("\n-----------------------------------------------------------------------\n");
	printf("Longest sub sequence sum is : %d ", l_sub_seq);
}