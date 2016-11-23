#include<stdio.h>

main(){

	printf("\nFahrenheit\tCelsius\v\n"); //fahrenheit to celsius reverse table

	int LOWER = 300;
	int UPPER = 0;
	float celsius = 0;

	for (int fahrenheit = LOWER; fahrenheit >= UPPER; fahrenheit = fahrenheit - 20)
	{
		celsius = ( 5 * (fahrenheit - 32 ) ) / 9.0;
		printf("|%3d|\t\t|%6.1f|\n", fahrenheit, celsius );
	}
}