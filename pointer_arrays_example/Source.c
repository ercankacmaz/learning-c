#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>
#include <string.h>




int main()
{
	const char* const pmonths[] = {
		"Ocak",
		"Subat",
		"Mart",
		"Nisan",
		"Mayis",
		"Haziran",
		"Temmuz",
		"Agustos",
		"Eylul",
		"Ekim",
		"Kasim",
		"Aralik"
	};

	char entry[40];

	printf("Bir ay ismi giriniz: ");
	(void)scanf("%s", entry);


	for (size_t i = 0; i < 12; ++i)
	{
		if (!strcmp(entry, pmonths[i]))
		{
			printf("%s yilin %d. ayidir.\n", pmonths[i], i + 1);
		}
	}


}