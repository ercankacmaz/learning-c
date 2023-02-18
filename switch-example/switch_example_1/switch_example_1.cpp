#include<stdio.h>


int main()
{

	int day, month, year;

	printf("Enter the date, month, and year information (dd/mm/yyyy): ");
	scanf_s("%d%d%d", &day, &month, &year);
	printf("%d/%d/%d\n", day, month, year);
	switch (day)
	{
	case 1:
	case 11:
	case 21:
	case 31:
		switch (month)
		{
		case 1: printf("%dst of January %d", day, year);
			break;
		case 2: printf("%dst  of February %d", day, year);
			break;
		case 3:  printf("%dst  of March %d", day, year);
			break;
		case 4:  printf("%dst  of April %d", day, year);
			break;
		case 5:  printf("%dst  of May %d", day, year);
			break;
		case 6:  printf("%dst  of June %d", day, year);
			break;
		case 7:  printf("%dst  of July %d", day, year);
			break;
		case 8:  printf("%dst  of August %d", day, year);
			break;
		case 9:  printf("%dst  of September %d", day, year);
			break;
		case 10: printf("%dst  of October %d", day, year);
			break;
		case 11: printf("%dst  of November %d", day, year);
			break;
		case 12: printf("%dst  of December %d", day, year);
			break;
		default: 
			break;
		}
		break;
	
	case 2:
	case 12:
	case 22:
		switch (month)
		{
		case 1: printf("%dnd of January %d", day, year);
			break;
		case 2: printf("%dnd  of February %d", day, year);
			break;
		case 3:  printf("%dnd  of March %d", day, year);
			break;
		case 4:  printf("%dnd  of April %d", day, year);
			break;
		case 5:  printf("%dnd  of May %d", day, year);
			break;
		case 6:  printf("%dnd  of June %d", day, year);
			break;
		case 7:  printf("%dnd  of July %d", day, year);
			break;
		case 8:  printf("%dnd  of August %d", day, year);
			break;
		case 9:  printf("%dnd  of September %d", day, year);
			break;
		case 10: printf("%dnd  of October %d", day, year);
			break;
		case 11: printf("%dnd  of November %d", day, year);
			break;
		case 12: printf("%dnd  of December %d", day, year);
			break;
		default:
			break;
		}
		break;
	case 3:
	case 13:
	case 23:
		switch (month)
		{
		case 1: printf("%drd of January %d", day, year);
			break;
		case 2: printf("%drd  of February %d", day, year);
			break;
		case 3:  printf("%drd  of March %d", day, year);
			break;
		case 4:  printf("%drd  of April %d", day, year);
			break;
		case 5:  printf("%drd  of May %d", day, year);
			break;
		case 6:  printf("%drd  of June %d", day, year);
			break;
		case 7:  printf("%drd  of July %d", day, year);
			break;
		case 8:  printf("%drd  of August %d", day, year);
			break;
		case 9:  printf("%drd  of September %d", day, year);
			break;
		case 10: printf("%drd  of October %d", day, year);
			break;
		case 11: printf("%drd  of November %d", day, year);
			break;
		case 12: printf("%drd  of December %d", day, year);
			break;
		default:
			break;
		}
		break;
		
	default:
		switch (month)
		{
		case 1: printf("%dth of January %d", day, year);
			break;
		case 2: printf("%dth  of February %d", day, year);
			break;
		case 3:  printf("%dth  of March %d", day, year);
			break;
		case 4:  printf("%dth  of April %d", day, year);
			break;
		case 5:  printf("%dth  of May %d", day, year);
			break;
		case 6:  printf("%dth  of June %d", day, year);
			break;
		case 7:  printf("%dth  of July %d", day, year);
			break;
		case 8:  printf("%dth  of August %d", day, year);
			break;
		case 9:  printf("%dth  of September %d", day, year);
			break;
		case 10: printf("%dth  of October %d", day, year);
			break;
		case 11: printf("%dth  of November %d", day, year);
			break;
		case 12: printf("%dth  of December %d", day, year);
			break;
		default:
			break;
		}
		break;
	}




	/*int n;
	printf("Enter the  month number: ");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1: printf("January");
		break;
	case 2: printf("February");
		break;
	case 3:  printf("March");
		break;
	case 4:  printf("April");
		break;
	case 5:  printf("May");
		break;
	case 6:  printf("June");
		break;
	case 7:  printf("July");
		break;
	case 8:  printf("August");
		break;
	case 9:  printf("September");
		break;
	case 10: printf("October");
		break;
	case 11: printf("November");
		break;
	case 12: printf("December");
		break;
		
	default: printf("It is not a valid month");
		break;
	}*/



}