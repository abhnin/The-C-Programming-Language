#include <stdio.h>

main() {
	int nc;
	nc = 0;

	while ( getchar() != '\n' )
		++nc;
	printf("\n%d\n", nc);
}
