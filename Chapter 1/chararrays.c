#include <stdio.h>
#define MAXLINE 1000

int getlinex(char s[], int lim);
void copy(char from[], char to[]);

main()
{	
	int len, max;
	char line[MAXLINE], longest[MAXLINE];
	max = 0;
	while( (len = getlinex(line, MAXLINE)) > 0){
		if(len >= max){
			max = len;
			copy(line, longest);
		}

	}

	if (max > 0)
	{
		printf("\nLongest line: %s\n", longest );
	}

	
	return 0;
}

void copy(char from[], char to[]){
	int i;
	i = 0;

	while( (to[i] = from[i]) != '\0' )
		++i;

}

int getlinex(char s[], int lim){

	char ch;
	int i;

	i = 0;

	while( (ch = getchar()) != EOF && ch != '\n' && i < lim-1 ) {

		s[i] = ch;
		++i;
	}
	
	if(ch == '\n'){ 
		s[i] = ch;
		++i;
	}

	s[i] = '\0';
	return i;

}