//함수이름:Administer_mode
//함수기능:관리자메뉴 
//입력:관리자의 각메뉴 선택 옵션
//출력:관리자의 각 메뉴
//리턴값:SeoulSubway 구조체
//최종수정일:2017-02-26
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