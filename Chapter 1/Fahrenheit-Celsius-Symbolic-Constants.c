#include<stdio.h>

main(){

	printf("\nFahrenheit\tCelsius\v\n"); //fahrenheit to celsius converter using for loop

	#define LOWER 0
	#define UPPER 300
	#define STEP 20
	float celsius = 0;

	for (int fahrenheit = LOWER; fahrenheit <= UPPER; fahrenheit = fahrenheit + STEP)
	{
		celsius = ( 5 * (fahrenheit - 32 ) ) / 9.0;
		printf("|%3d|\t\t|%6.1f|\n", fahrenheit, celsius );
	}
}	