#include <stdio.h>
int main()
{
	int num;
	printf("请输入安全级别系数：");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("生产安全\n");
			break; 
		case 2:
			printf("警告！请检修设备！\n");
			break; 
		case 3:
			printf("危险！！请立即查看！！\n");
			break; 
		case 4:
			printf("危险操作！！！已自动停产\n");
			break; 
		default:
		    printf("监控到参数错误\n");
			break;		   	
	}
	return 0; 
}
