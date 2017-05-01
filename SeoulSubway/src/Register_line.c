//함수이름:Register_line
//함수기능:노선등록
//입력:노선이름
//출력:노선등록성공,실패 메시지
//리턴값:Register_line_count
//최종수정일:2017-03-13

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
	printf(" □■□■□■□■□■\n");
	printf(" ■     노선등록   □\n");
	printf(" □■□■□■□■□■\n");
	printf("\n");
	printf(" 노선 이름과 역을 입력받아 노선을 생성합니다.\n");
	printf(" 역은 1호선 부터 차례대로 입력합니다\n");
	printf("현재 역 다음역 소요시간 역이름 순서로 입력합니다\n");
	printf(" 예) 1 2 3 소요산 0 or exit (0이면 계속입력 exit면 종료)\n");
	printf("\n\n");



	rewind(stdin);

	while (1) 
	
	{
		new = (Linked_node*)malloc(sizeof(Linked_node));							//new 노드에 동적할당
		if (new == NULL) {
			printf("동적할당오류");
		}
		scanf("%d %d %s %s", &new->Main, &new->Sub,new->RE_station,&roofBreak);		//new 노드 포인터가 가르키는 구조체 변수에 각 데이터를 저장
		new->next = NULL;															//new의 다음노드를 null로 초기화
		new->prev = tail;															//new의 이전노드는 tail 즉, 꼬리부분 으로 만듬, 새로운 노드를 리스트의 맨끝에 삽입하기위한 작업
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
			break;																	//반복문 탈출을 위한 조건문
		}
		
	}

	printf("==============================================\n");					
	printf(" *등록이 완료되었습니다*\n");

	printf("추가로 노선을 등록하시겠습니까? Y추가등록 N 관리자메뉴\n");


	



	scanf("%s", &option);															//추가등록 여부를 위한 option입력

	if (!strcmp(option,"Y")) {									
		while (1)

		{
			new = (Linked_node*)malloc(sizeof(Linked_node));
			scanf("%d %d %d %s %s", &new->Main, &new->Sub, &new->weigh,new->RE_station, &roofBreak);		//추가 노선등록
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
		printf(" *등록이 완료되었습니다*\n");

	}
	else if (!strcmp(option,"N")) {															//관리자메뉴로 돌아감
		system("cls");
		Administer_print();
		return plist;
	}
	


};