#include <stdio.h>

main()
{
	int ch;
	int prev;

	while( ( ch = getchar()) != EOF) {

		if (ch != ' ')
		{
			putchar(ch);
		}
		else if (ch == ' ')
		{
			if (prev != ' ')
			{
				putchar(ch);
			}
		}

		prev = ch;
	}

}