#include <stdio.h>

main() {
	int ch, wordLen, digitFrequencies[11];				//Declaration

	wordLen = 0;
	for(int i = 0; i < 11; ++i)							//Intialisation
		digitFrequencies[i] = 0;

	while((ch = getchar()) != EOF){
		if (ch != ' ' && ch != '\n' && ch != '\t')
			++wordLen;
		else{
			
			if (wordLen < 11) 
				++digitFrequencies[wordLen - 1];
			else
				++digitFrequencies[10];
			
			wordLen = 0;

			}
			
	}

	if (wordLen < 11) 
		++digitFrequencies[wordLen - 1];
	else
		++digitFrequencies[10];

	printf("\n\tHistogram\n");

	for (int i = 0; i < 11; ++i)
	{
		if (i == 10)
			printf("\n[10+] ");
		else
			printf("\n[%d] ", i+1);

		for (int j = 0; j < digitFrequencies[i]; ++j)
			printf("*");
		
	}

	printf("\n\tEnd\n");


}