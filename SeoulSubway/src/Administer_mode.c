//�Լ��̸�:Administer_mode
//�Լ����:�����ڸ޴� 
//�Է�:�������� ���޴� ���� �ɼ�
//���:�������� �� �޴�
//���ϰ�:SeoulSubway ����ü
//����������:2017-02-26
#include "stddef.h"
#include "SeoulSubway.h"
#include "mydef.h"

extern Register_line(Linked_node *head, Linked_node *tail, Linked_node *new, int *Register_line_count);

void Administer_mode(Subway *Subway_Struct){



	Linked_node *new = NULL;
	Linked_node *tail = NULL;
	Linked_node *head = NULL;
	Linked_node *plist = NULL;

	Administer_print();



	int option;
	while (1) {
		scanf_s("%d", &option);
		switch (option)
		{
			
		case 1:system("cls");
			Register_line(&plist,&head,&tail,&new);
			break;

		case 2:
			system("cls");
			Register_translate_line();
			break;
		case 3:
			system("cls");
			Register_weigh_time(&plist,&head,&tail,&new);
			break;

		case 4:Register_lesion(head,tail,new);
			break;
		case 5:Save_file(&head,&tail,&new,&plist);
			break;
		case 6:searchLine(&plist,&head,&tail,&new);
			break;
		case 7:main();
			break;
		default:
			break;
		}
	}
	
	}