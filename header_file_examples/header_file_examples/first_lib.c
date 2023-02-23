#include"first_lib.h"

int maxofTwo(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}

}

int factorial(int z)
{
	int result = 1;
	for (int i = 1; i <= z; i++)
	{
		result *= i;
	}
	return result;
}

