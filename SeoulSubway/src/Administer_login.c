//�Լ��̸�:Administer_login
//�Լ����:������ �α��� ���
//�Է�:��й�ȣ==check
//���:��й�ȣ�� Ʋ�� �� ���� �޽���
//���ϰ�:����
//����������:2017-02-26



#include <string.h>
#include <windows.h>
void Administer_login() {

	char Pw[10] = { "jung1571" };
	char check[10];
	printf("\n");
	printf(" �����������\n");
	printf(" ��  ������ �α��� ��\n");
	printf(" �����������\n");
	printf("\n");

	printf("PW:");
	scanf("%s", check);

	while (1){
		if (0 == strcmp(Pw, check)) 
		{	
			break;
		}

		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("ERROR");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			printf("��й�ȣ�� Ʋ���ϴ�\n");
			scanf("%s", check);
		}
	}
}