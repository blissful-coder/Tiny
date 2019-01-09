#include <stdio.h>
#include "scanner.h"  /* Include the header here, to obtain the function declaration */

int main(void)
{
    int y = demo_scan(3);  /* Use the function here */
    printf("%d\n", y);
	
	int z = scanner("qwertyuiopasdfghjklzxcvbnm");
	printf("%d\n", z);
	
    return 0;
}