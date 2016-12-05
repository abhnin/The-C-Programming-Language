#include <stdio.h>
#define MAXLINE 1000

int getlinex(char s[], int lim);
void rev(char from[], int len);

int count = 0;

int main() {

	int len;
	char line[MAXLINE];

	while( (len = getlinex(line, MAXLINE)) > 0){
		rev(line, len);
	}

	return 0;
}

void rev(char from[], int len) {

	char temp[len];
	int z = 0;

	for (int i = len-2; i >=0; --i)
	{
		temp[z] = from[i];
		++z;
	}

	temp[z] = '\n';
	++z;
	temp[z] = '\0';

	printf("\n%s\n", temp );

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