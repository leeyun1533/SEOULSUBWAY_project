//�Լ��̸�:showfirst
//�Լ����:�˰����� �����ϱ��� ó������ �������� �Է��Ͽ� ����ü�� ����� ���Ѵ�.
//�Է�:��߿� ������
//���:��߿�,������ �񱳸޽���
//���ϰ�:numberName,dest,start,����ȣ
//����������:2017-02-24
//



#include <windows.h>

void showfirst(char **numberName, char dest[], char start[], int s) {
	while (1) {
		printf("��߿� �Է�\n");
		scanf("%s", dest);
		if ((strcmp(dest, start)))	break;
		else printf("�߸� �Է��ϼ̽��ϴ�. \n");
	}
	while (1)
	{
		printf("\n�������� �Է��ϼ��� \n");
		scanf("%s", start);																		//�������Է�
		int exist = nameExist(numberName, start, s);											//numberName �迭�� ����� ���̸��߿� �Է��� �������� �ִ��� Ȯ��
		if (exist != 0)
		{
			if (strcmp(dest, start) != 0)														
			{
				break;
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf("ERROR");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				printf("��߿��� �������� �����ϴ�\n");
			
			}
		}
		else
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("ERROR");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			printf(":�߸� �Է��ϼ̽��ϴ�.\n");
		}
	}
}