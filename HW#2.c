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
	star();//�I�sstar���
	printf("* A. �e�X�����T���� *\n");
	printf("* B. ��ܭ��k��     *\n");
	printf("* C. ����           *\n");
	star();//�I�sstar���	
	return;
}

int main(void)
{
	int a,b=2;
	char c,e;
	star();//�I�sstar��� 
	printf("* �w��Ө�{���@�~2 *\n");
	printf("* �����N��H�}�l�C��*\n");  
	star();//�I�sstar��� 
	getch();
	system("cls");//�M���ù�
	printf("�п�J4��ƪ��K�X:");
	scanf("%d",&a);
	while(a!=2024)//�K�X=2024 
	{
		printf("��J���~�A�ٳ�%d�����|:",b);
		scanf("%d",&a);
		if(b==0)//��b=0�ɡA�����{�� 
		{
			printf("�T�����|�w�Χ��A�T�T");
			exit(EXIT_FAILURE);
		}
		b=b-1;
	}
	system("cls");//�M���ù�
	Main();//�I�sMain��ơA��D���s�X��
	printf("�п�J:");
	scanf("%s",&c);		
	switch(c)
	{
	case 'A':
	case 'a':
		system("cls");//�M���ù�
		printf("��J�@��'a'��'n'���r��:");
		scanf("%s",&e);
		while(e<'a'||e>'n')
		{
			printf("�Э��s��J�@��'a'��'n'���r��:");
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
			system("cls");//�M���ù�
			break;
		
	

	
	}
    return 0;
}
