#include<stdio.h>

#define SIZE 10

int main()
{

	int score_of_students[SIZE] = { 54, 25, 69, 74, 67, 83, 71 }; //the program assign zero to undefined elements of the array

	for (int i = 0; i < SIZE; i++)
	{
		printf("Score of the student %d is %d\n", i+1, score_of_students[i]);
	}


}