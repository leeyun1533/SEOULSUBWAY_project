//�Լ��̸�:gotoxy
//�Լ����:�޴��� �ܼ�â��� ����ϱ� ���� �Լ�
//�Է�:����
//���:����
//���ϰ�:��ǥ��
//����������:2017-02-13

#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}