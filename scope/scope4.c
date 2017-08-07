
#include <stdio.h>

#if 0
//initialize for static varibles 
int c = 19;
int b = c;
#endif 

int b = 10;

int main()
{
	int i = 0;
	int a = b;

	{
		int x = j;
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
		
