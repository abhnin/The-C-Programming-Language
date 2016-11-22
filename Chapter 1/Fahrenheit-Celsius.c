#include<stdio.h>

main() {
	
	printf("\nFahrenheit\tCelsius\v\n");

	int LOWER = 0;
	int UPPER = 300;
	int STEP = 20;
	int fahrenheit = LOWER;
	float celsius = 0;


	while(fahrenheit <= UPPER){

		celsius = ( 5 * (fahrenheit - 32 ) ) / 9.0;
		printf("|%3d|\t\t|%6.1f|\n", fahrenheit, celsius );
		fahrenheit += STEP;

	}
}