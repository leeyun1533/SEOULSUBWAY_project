//�Լ��̸�:Register_line
//�Լ����:�뼱���
//�Է�:�뼱�̸�
//���:�뼱��ϼ���,���� �޽���
//���ϰ�:Register_line_count
//����������:2017-03-13

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include "SeoulSubway.h"
#include "mydef.h"



int Register_line(Linked_node *plist,Linked_node *head, Linked_node *tail, Linked_node *new) {

								
	char roofBreak[10];
	char roofCheck[] = { "exit" };
	char option[10];
	char seachName[10];
	int count=0;
	plist=NULL;



	printf("\n");
	printf(" �����������\n");
	printf(" ��     �뼱���   ��\n");
	printf(" �����������\n");
	printf("\n");
	printf(" �뼱 �̸��� ���� �Է¹޾� �뼱�� �����մϴ�.\n");
	printf(" ���� 1ȣ�� ���� ���ʴ�� �Է��մϴ�\n");
	printf("���� �� ������ �ҿ�ð� ���̸� ������ �Է��մϴ�\n");
	printf(" ��) 1 2 3 �ҿ�� 0 or exit (0�̸� ����Է� exit�� ����)\n");
	printf("\n\n");



	rewind(stdin);

	while (1) 
	
	{
		new = (Linked_node*)malloc(sizeof(Linked_node));							//new ��忡 �����Ҵ�
		if (new == NULL) {
			printf("�����Ҵ����");
		}
		scanf("%d %d %s %s", &new->Main, &new->Sub,new->RE_station,&roofBreak);		//new ��� �����Ͱ� ����Ű�� ����ü ������ �� �����͸� ����
		new->next = NULL;															//new�� ������带 null�� �ʱ�ȭ
		new->prev = tail;															//new�� �������� tail ��, �����κ� ���� ����, ���ο� ��带 ����Ʈ�� �ǳ��� �����ϱ����� �۾�
		head->Main = NULL;
		head->Sub = NULL;

		if(head==NULL)																	
		{																			
			head = new;
			head->prev = NULL;
			tail = head;
		}

		else															
		{
			tail->next = new;
			tail = new;
			
																	
		}
		

		if (!strcmp(roofBreak,roofCheck))
		{
			break;																	//�ݺ��� Ż���� ���� ���ǹ�
		}
		
	}

	printf("==============================================\n");					
	printf(" *����� �Ϸ�Ǿ����ϴ�*\n");

	printf("�߰��� �뼱�� ����Ͻðڽ��ϱ�? Y�߰���� N �����ڸ޴�\n");


	



	scanf("%s", &option);															//�߰���� ���θ� ���� option�Է�

	if (!strcmp(option,"Y")) {									
		while (1)

		{
			new = (Linked_node*)malloc(sizeof(Linked_node));
			scanf("%d %d %d %s %s", &new->Main, &new->Sub, &new->weigh,new->RE_station, &roofBreak);		//�߰� �뼱���
			new->next = NULL;
			new->prev = tail;

			if (head == NULL)
			{
				head = new;
				head->prev = NULL;
				tail = head;
				
			}
			else
			{
				tail->next = new;
				tail = new;
			}

			if (!strcmp(roofBreak, roofCheck))
			{

				break;

			}

		}
		
		printf("==============================================\n");
		printf(" *����� �Ϸ�Ǿ����ϴ�*\n");

	}
	else if (!strcmp(option,"N")) {															//�����ڸ޴��� ���ư�
		system("cls");
		Administer_print();
		return plist;
	}
	


};