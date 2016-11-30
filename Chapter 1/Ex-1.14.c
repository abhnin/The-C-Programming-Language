#include <stdio.h>

main() {
	int ch, ascii_set[128];

	for (int i = 0; i < 128; ++i)
		ascii_set[i] = 0;

	while( (ch = getchar()) != EOF )
		++ascii_set[ch];

	printf("\n\tHistogram\n");

	for (int i = 0; i < 128; ++i)
	{	
		printf("\n[%c] ", i);
		for (int j = 0; j < ascii_set[i]; ++j)
			printf("*");
	}

	printf("\n\tEnd\n");

}