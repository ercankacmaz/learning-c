#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>


typedef int(*Fptest)(int);

int main()
{
	char ch;
	printf("Test edilmesini istediginiz karakteri giriniz: ");
	(void)(scanf)("%c", &ch);
	const char* const test_func_name[] = {
		"isupper",
		"islower",
		"isalpha",
		"isalnum",
		"isdigit",
		"isxdigit",
		"ispunct",
		"isscapce",
		"isblank",
		"iscntrl"
	};
	Fptest fp[] = {
			isupper,
			islower,
			isalpha,
			isalnum,
			isdigit,
			isxdigit,
			ispunct,
			isspace,
			isblank,
			iscntrl
	};

		char enter_func[40];
		printf("Enter the name of test: ");
		(void)scanf("%s", enter_func);

		size_t i;
		for (i = 0; i < sizeof(test_func_name) / sizeof(char*) && strcmp(test_func_name[i], enter_func); i++)
			;

		if (i < sizeof(test_func_name) / sizeof(char*))
		{
			if (fp[i](ch))
			{
				printf("%c karakterinin %s testi dogru.\n", ch, enter_func);
			}
			else
			{
				printf("%c karakterinin %s testi yanlis.\n", ch, enter_func);
			}
		}
		else
		{
			printf("Girdiginiz %s testi bulunamadi..!\n", enter_func);
		}


}