#include <stdio.h>
int main()
{
	int num=1,sum=0;
	while(num<=100)
	{
		sum+=num;
		num++;
		
	}
	printf("1到100的和为%d\n",sum);
	return 0; 
}
