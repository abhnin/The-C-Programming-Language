#include <stdio.h>

unsigned long long power(int, int);

main() {

	int base, e;

	for (int i = 0; i < 64; ++i)
		printf("2^%d = %llu\n",i, power(2, i));

}

unsigned long long power(int base, int n){

	unsigned long long answer = 1;

	for (int i = 0; i < n; ++i)
		answer = answer * base;

	return answer;
}