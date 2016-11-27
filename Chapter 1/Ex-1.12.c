#include <stdio.h>

main()
{
	int wc, ch, prev;
	prev = 9999;

	while( (ch = getchar()) != EOF ){

		putchar(ch);

		if (ch == ' ' || ch == '\t' || ch == '\n')
		{
			if (prev != ' ' && prev != '\t' && prev != '\n' && prev != 9999)
				putchar('\n');
		}

		prev = ch;
	}

	if (prev != ' ' && prev != '\t' && prev != '\n' && prev != 9999)
				putchar('\n');

}