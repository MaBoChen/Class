#include <stdio.h>
int main()
{
	int num;
	printf("�����밲ȫ����ϵ����");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
			printf("������ȫ\n");
			break; 
		case 2:
			printf("���棡������豸��\n");
			break; 
		case 3:
			printf("Σ�գ����������鿴����\n");
			break; 
		case 4:
			printf("Σ�ղ������������Զ�ͣ��\n");
			break; 
		default:
		    printf("��ص���������\n");
			break;		   	
	}
	return 0; 
}
