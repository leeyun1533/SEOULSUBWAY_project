//�Լ��̸�:Option_Print
//�Լ����:�� ��ɺ� �޴��� ������ش�
//�Է�:main�Լ����� �޴��� �Ѿ������ �Է��� option
//���:�� ����� ��ɺ� �޴�
//���ϰ�:����
//����������:2017-02-18

#include <stdio.h>


void Option_Print(int option) {
	

	switch (option)
	{

	case 1:	printf("\n");
			printf(" �������������\n");
			printf(" ��  �ִܰŸ� �뼱�˻� ��\n");
			printf(" �������������\n");
			printf("\n");
			break;

	case 2:	printf("\n");
			printf(" �������������\n");
			printf(" ��    ��õ �뼱�˻�   ��\n");
			printf(" �������������\n");
			printf("\n");
			break;

	case 3:printf("\n");
			printf(" �������������\n");
			printf(" ��  �ּ�ȯ�� �뼱�˻� ��\n");
			printf(" �������������\n");
			printf("\n");
			break;
	case 4:	printf("\n");
			printf(" �������������\n");
			printf(" ��  ����ð� �뼱�˻� ��\n");
			printf(" �������������\n");
			printf("\n");
			break;

	case 5:	printf("\n");
			printf(" �������������\n");
			printf(" ��      �뼱��      ��\n");
			printf(" �������������\n");
			printf("\n");
			break;
	case 6:	printf("\n");
		printf(" �������������\n");
		printf(" ��    ��ȣ�뼱���    ��\n");
		printf(" �������������\n");
		printf("\n");
		break;

	default:
		break;
	}
}