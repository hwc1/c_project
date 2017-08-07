#include <stdio.h>

int main()
{
	enum Liquid {
		QUNCE = 1,
		CIP = 8,
		PINT = 16,
		QUART = 32,
		QALLON = 128
	};

	enum Liquid jar;
	
	jar = QUART;
	
	printf("%s\n", jar);
	
	jar = jar + PINT;
	
	printf("%s\n", jar);
	
	return 0;	
}
