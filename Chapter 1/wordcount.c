#include <stdio.h>

main()
{
	int wc, lc, cc, ch, prev;
	lc = cc = 0;
	wc = 0;
	prev = 9999;

	while( (ch = getchar()) != EOF ){
		++cc;

		if (ch == '\n')
			++lc;

		if (ch == ' ' || ch == '\t' || ch == '\n')
		{
			if (prev != ' ' && prev != '\t' && prev != '\n' && prev != 9999)
				++wc;
		}

		prev = ch;
	}

	if (prev != ' ' && prev != '\t' && prev != '\n' && prev != 9999)
				++wc;

	printf("\nWord Count: %d\nCharacter Count: %d\nLine Count: %d\n", wc, cc, lc);

}