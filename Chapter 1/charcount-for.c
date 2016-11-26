#include <stdio.h>

main() {

	double ch;

	for (ch = 0; getchar() != EOF; ++ch){}
	
	printf("\n%0.0f\n", ch);
}