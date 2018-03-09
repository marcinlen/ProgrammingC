/*
 * Test of characters Universal Characte Set
 */
 
#include <stdio.h>
#include <wchar.h>

int main(void)
{
	wchar_t c = '\u01A8';
	
	printf("%c\n", c);
	
	return 0;
}
