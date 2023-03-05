#include<stdio.h>
#include<string.h>




int main()
{
	char name[] = "ayse";
	printf("%s\n", name);
	printf("%zu\n", sizeof(name)); // there is null character at the end of the string
	name[0] = 'f';
	name[1] = 'u';
	name[2] = 'a';
	name[3] = 't';
	printf("%s\n\n", name);

	char name1[] = { 'T', 'A', 'R', 'I', 'K', '\0' }; // if we need to initialize the array with this way we have to give null character at the end
	printf("%s\n\n\n", name1);



}