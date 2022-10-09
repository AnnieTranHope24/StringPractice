#include "ourstrings.h"
#include <stdio.h>
int main (int argc, char** argv) {
	char hello[] = "Hello world!!!!!";
	char world[17];
	copy (hello, world);
	printf ("hello = %s (length %d) , world = %s (length %d) \n", hello, strlength(hello), world, strlength(world));
	printf("\n");
	char hexAlphabet[] = "0123456789abcdef";
	printf("Number of replacements: %d\n", replace (hexAlphabet, "acf", "ACF"));
	printf ("New version is %s\n", hexAlphabet);
	char hexAlphabet1[] = "0123456789abcdef";
	printf("Number of replacements: %d\n", replace (hexAlphabet1, "acfg", "ACF"));
	printf ("New version is %s\n", hexAlphabet1);
	printf("\n");
	char name[] = "ANNIE";
	strtolower(name);
	printf("To lower case: %s\n", name);
	printf("\n");
	
	printf("and & andrew: %d\n", strcompare("and", "andrew"));
	printf("and & and: %d\n", strcompare("and", "and"));
	printf("And & and: %d\n", strcompare("And", "and"));
	printf("hello & and: %d\n", strcompare("hello", "and"));
	printf("hello & hell: %d\n", strcompare("hello", "hell"));
}

