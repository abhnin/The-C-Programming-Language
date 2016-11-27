#include <stdio.h>

main() {

	int lines;
	lines = 1;
	char ch;

	while( (ch = getchar()) != EOF) {

		if (ch == '\n')
		{
			++lines;
		}
	}

	printf("\n%d\n", lines );
}