#include <stdio.h>

int main()
{
	int ch;
	int count = 0;//����һ��������count

	while((ch = getchar()) != '\n')//ѭ�����룬EOF����
	{
	       //������{ʱ��������+1
		if(ch == '{')
		{
			count ++;
		}

		//������}��������Ϊ0�ˣ������ƥ�䣬��Ϊ}��{ǰ��
		if(ch == '}' && count == 0)
		{
			printf("not match\n");
			return 0;
		}                      

		//������}�Ҽ�������Ϊ0ʱ��������-1
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
