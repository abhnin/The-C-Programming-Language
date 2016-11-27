#include <stdio.h>

main() {

	int blanks, tabs, newlines;
	blanks = tabs = newlines = 0;

	int ch;

	while( (ch = getchar()) != EOF) {

		if (ch == ' ')
		{
			++blanks;
		}
		else if (ch == '\t')
		{
			++tabs;
		}
		else if (ch == '\n')
		{
			++newlines;
		}
	}

	printf("\nYour text has %d blanks %d tabs and %d newlines \n", blanks, tabs, newlines );
}