#include <stdio.h>
#include <stdlib.h>

void star(void);
void Main(void);

void star(void)
{
	printf("*********************\n");
	return;
}
void Main(void)
{
	star();//呼叫star函數
	printf("* A. 畫出直角三角形 *\n");
	printf("* B. 顯示乘法表     *\n");
	printf("* C. 結束           *\n");
	star();//呼叫star函數	
	return;
}

int main(void)
{
	int a,b=2;
	char c,e;
	star();//呼叫star函數 
	printf("* 歡迎來到程式作業2 *\n");
	printf("* 按任意鍵以開始遊戲*\n");  
	star();//呼叫star函數 
	getch();
	system("cls");//清除螢幕
	printf("請輸入4位數的密碼:");
	scanf("%d",&a);
	while(a!=2024)//密碼=2024 
	{
		printf("輸入錯誤，還剩%d次機會:",b);
		scanf("%d",&a);
		if(b==0)//當b=0時，結束程式 
		{
			printf("三次機會已用完，掰掰");
			exit(EXIT_FAILURE);
		}
		b=b-1;
	}
	system("cls");//清除螢幕
	Main();//呼叫Main函數，把主菜單叫出來
	printf("請輸入:");
	scanf("%s",&c);		
	switch(c)
	{
	case 'A':
	case 'a':
		system("cls");//清除螢幕
		printf("輸入一個'a'到'n'的字元:");
		scanf("%s",&e);
		while(e<'a'||e>'n')
		{
			printf("請重新輸入一個'a'到'n'的字元:");
			scanf("%s",&e);
		}
		int i,j,k;
			for(i=0;i<=e-97;i++)
			{	
				for(k=0;k<e-97-i;k++)
				{
					printf(" ");
				}
				for(j=i;j>=0;j--)
				{
					printf("%c",e-j);
				}
			printf("\n");
			}
			getch();
			system("cls");//清除螢幕
			break;
		
	

	
	}
    return 0;
}
