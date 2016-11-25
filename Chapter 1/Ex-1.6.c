#include <stdio.h>

main()
{
	int ch;
	int boolean = 1;

	ch = getchar();

	while( boolean ){
		putchar(ch);
		boolean = ((ch = getchar()) != EOF);
		printf("%d\n", boolean );

	}

}
