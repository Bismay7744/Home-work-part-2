// C program to demonstrate setdate() method

#include <dos.h>
#include <stdio.h>

int main()
{
	struct date dt;

	// This function is used to get
	// system's current date
	getdate(&dt);

	printf("System's current date\n");
	printf("%d/%d/%d",
		dt.da_day,
		dt.da_mon,
		dt.da_year);

	printf("Enter date in the format (date month year)\n");
	scanf("%d%d%d", &dt.da_day, &dt.da_mon, &dt.da_year);

	// This function is used to change
	// system's current date
	setdate(&dt);

	printf("System's new date (dd/mm/yyyy)\n")
		printf("%d%d%d", dt.da_day, dt.da_mon, dt.da_year);

	return 0;
}

