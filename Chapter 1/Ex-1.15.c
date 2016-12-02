#include <stdio.h>

float f_c(int);

main() {
	
	printf("\nFahrenheit\tCelsius\v\n"); //fahrenheit to celsius converter 

	int LOWER = 0;
	int UPPER = 300;
	int STEP = 20;
	int fahrenheit = LOWER;
	float celsius = 0;


	while(fahrenheit <= UPPER){

		printf("|%3d|\t\t|%6.1f|\n", fahrenheit, f_c(fahrenheit) );
		fahrenheit += STEP;

	}
}

float f_c(int f){
 
	float c = ( 5 * (f - 32 ) ) / 9.0;
	return c;
}
