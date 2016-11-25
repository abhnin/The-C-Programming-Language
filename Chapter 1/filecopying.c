#include <stdio.h>

main()
{
	char ch;

	ch = getchar();

	while(ch != EOF) {
		putchar(ch);
		ch = getchar();
	}

}
