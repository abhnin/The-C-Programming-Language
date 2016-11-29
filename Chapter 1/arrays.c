#include <stdio.h>

main() {
	int ndigit[10];
	int other, white, ch;

	white = other = 0;

	for (int i = 0; i < 10; ++i) {
		ndigit[i] = 0;
	}

	while((ch = getchar()) != EOF) {
		if (ch == ' ' || ch == '\n' || ch == '\t')
			++white;
		else if (ch >= '0' && ch <= '9')
		{
			++ndigit[ch - '0'];
		}
		else
			++other;
	}

	printf("\nWhitespaces - %d\n\n", white);
	
	for (int i = 0; i < 10; ++i)
		printf("%d - %d\n",i, ndigit[i]);

	printf("\nOthers - %d\n", other);

}