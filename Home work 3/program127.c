#include <stdio.h>

int main()
{
	// Old file name
	char old_name[] = "geeks.txt";

	// Any string
	char new_name[] = "geeksforgeeks.txt";
	int value;

	value = rename(old_name, new_name);

	// Print the result
	if (!value) {
		printf("%s", "File name changed successfully");
	}
	else {
		perror("Error");
	}
	return 0;
}
