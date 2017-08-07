
#include <stdio.h>

int main()
{
	int i = 0;

	{
		int j = 0;
		//int func1(int);
	}

	//printf("j = %d\n", j);  error: ¡®j¡¯ undeclared (first use in this function)
	printf("func = %d\n", func1(2));
}

int func1(int x)
{
	return x + 1;
}
		