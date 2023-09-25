#define _CRT_SECURE_NO_WARNINGS



#include <stdio.h>
#include <time.h>


int main()
{
	time_t sec;
	time(&sec);
	
	printf(ctime(&sec));
}