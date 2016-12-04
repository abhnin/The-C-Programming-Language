#include <stdio.h>
#define MAXLINE 1000

int getlinex(char s[], int lim);
void write(char from[], char output[]);

int count = 0;

main() {

	int len;
	char line[MAXLINE], output[MAXLINE];

	while( (len = getlinex(line, MAXLINE)) > 0){
		if (line[0] != '\n')
		{
			write(line, output);
		}
		
	}

	printf("\n%s\n",output );

	return 0;

}

void write(char from[], char output[]) {

	for (int i = 0; (output[count] = from[i]) != '\0'; ++i)
		++count;
	--count;

	output[count] = '\n';
	++count;
	output[count] = '\0';

	int temp = count -2;

	while(output[temp] == ' ' || output[temp] == '\t' )
		--temp;

	output[temp+1] = '\n';
	output[temp+2] = '\0';
	count = temp + 2;


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