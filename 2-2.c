#include <stdio.h>

int main()
{
	int ch;
	int count = 0;//定义一个计数器count

	while((ch = getchar()) != '\n')//循环输入，EOF结束
	{
	       //当遇到{时，计数器+1
		if(ch == '{')
		{
			count ++;
		}

		//当遇到}但计数器为0了，输出不匹配，即为}在{前边
		if(ch == '}' && count == 0)
		{
			printf("not match\n");
			return 0;
		}                      

		//当遇到}且计数器不为0时，计数器-1
		if(ch == '}' && count !=0)
		{
			count --;
		}
	}

	if(count == 0)
	{
		printf("match\n");
	}
	else
	{
		printf("not match\n");
	}

	return 0;
}
