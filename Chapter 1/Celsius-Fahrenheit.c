#include<stdio.h>

main() {
	
	printf("\nCelsius\t\tFahrenheit\v\n"); //fahrenheit to celsius converter 

	int LOWER = 0;
	int UPPER = 300;
	int STEP = 20;
	int celsius = LOWER;
	float fahrenheit = 0.0;


	while(celsius <= UPPER){

		fahrenheit = 32 + (9 * celsius) / 5.0;
		printf("|%3d|\t\t|%6.1f|\n",celsius, fahrenheit );
		celsius += STEP;

	}
}