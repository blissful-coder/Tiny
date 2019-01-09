#include "scanner.h"  /* Include the header (not strictly necessary here) */

int demo_scan(int x)    /* Function definition */
{
    return x + 5;
}

TOKEN_TYPE scanner(char* word){
	int i =0;
	enum week{i,n,t,f};
	
	int DFA_TABLE[6][5] = {
		{1,5,5,5,5},
		{5,2,5,4,5},
		{5,5,3,5,5},
		{5,5,5,5,5},
		{5,5,5,5,5},
		{5,5,5,5,5}
	};
	
	while(word[i] !=- '\0'){
		i++;
	}
	
	return i;
}