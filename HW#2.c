#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a,b=2;
	printf("請輸入4位數的密碼:");
	scanf("%d",&a);
	while(a!=2024)
	{
		b=b-1;
		printf("輸入錯誤，還剩%d次機會:",b+1);
		scanf("%d",&a);
		if(b==0)
		{
			break;
		}
	}



    return 0;
}
