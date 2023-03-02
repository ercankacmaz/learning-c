#include<stdio.h>


int* sqr(int* ptr)
{
	*ptr = (*ptr) * (*ptr);

	return ptr;
}

int* sum(int* a, int* b)
{
	static int result = 0;
	result = *a + *b;
	return &result;
}


int main()
{

	int x = 20;

	printf("%p\n", sqr(&x));
	printf("%d\n", x);

	int w, y;
	int* pw = &w;
	int* py = &y;
	printf("Enter the values of w, and y: ");
	scanf_s("%d%d", &w, &y);
	int* psum = sum(pw, py);
	printf("\n%d", *psum);



}