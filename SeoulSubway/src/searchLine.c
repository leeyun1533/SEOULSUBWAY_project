//�Լ��̸�:searchLine
//�Լ����:�뼱ã��
//�Է�:ã�� �뼱�̸�
//���:�� ��ȣ ���� �� �̸�
//���ϰ�:
//����������:2017-03-13
//




#include <stdlib.h>
#include "SeoulSubway.h"
#include "mydef.h"

#define _GNU_SOURCE
#define _CRT_SECURE_NO_WARNINGS

void searchLine(Linked_node *plist,Linked_node *head, Linked_node *tail, Linked_node *new) {
	int count = 0;
	char searchName[20];
	plist = tail;

	printf("\n");
	printf(" �����������\n");
	printf(" ��     �뼱��ȸ   ��\n");
	printf(" �����������\n");
	printf("\n");
	
	printf("���̸� �Է�\n");
	scanf("%s", &searchName);

	while (plist != NULL) {																//lined_node ������ plist�� NULL�� �ƴҶ� ���� �ݺ��� ����
		
		if (!strcmp(searchName, plist->RE_station)) {									//�˻��� ���� ����� ���� ���Ͽ� �˻�
			printf("��ȸ �Ϸ� ����ȣ:%d ������ �̸�:%s ���̸�:%s",plist->Main, plist->next->RE_station,searchName); //�˻��� ���� ��ȣ�� �������� ���

			break;
		}
		plist = plist->next;															//������带 plist�����Ϳ� ����
		count++;
		 
	}

}