#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b=2;
	printf("�п�J4��ƪ��K�X:");
	scanf("%d",&a);
	while(a!=2024)
	{
		b=b-1;
		printf("��J���~�A�ٳ�%d�����|:",b+1);
		scanf("%d",&a);
		if(b==0)
		{
			break;
		}
	}



    return 0;
}
