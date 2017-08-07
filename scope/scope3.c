
#include <stdio.h>

int a = 0;

int main()
{
	int i = 0;

	{
		int j = 0;
		//int func1(int);
	}

	//printf("j = %d\n", j);  error: ¡®j¡¯ undeclared (first use in this function)
	printf("func = %d\n", func1(2));
	printf("a = %d\n", a);
}

int func1(int x)
{
	return x + 1;
}
		
