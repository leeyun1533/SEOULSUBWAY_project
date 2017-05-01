//함수이름:searchLine
//함수기능:노선찾기
//입력:찾을 노선이름
//출력:역 번호 다음 역 이름
//리턴값:
//최종수정일:2017-03-13
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
	printf(" □■□■□■□■□■\n");
	printf(" ■     노선조회   □\n");
	printf(" □■□■□■□■□■\n");
	printf("\n");
	
	printf("역이름 입력\n");
	scanf("%s", &searchName);

	while (plist != NULL) {																//lined_node 포인터 plist가 NULL이 아닐때 까지 반복문 실행
		
		if (!strcmp(searchName, plist->RE_station)) {									//검색할 역과 저장된 역을 비교하여 검색
			printf("조회 완료 역번호:%d 다음역 이름:%s 역이름:%s",plist->Main, plist->next->RE_station,searchName); //검색된 역의 번호와 다음역을 출력

			break;
		}
		plist = plist->next;															//다음노드를 plist포인터에 저장
		count++;
		 
	}

}