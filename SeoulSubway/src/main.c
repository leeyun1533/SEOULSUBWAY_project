//함수이름:main
//함수기능:main함수로써 다른함수들을 호출하고 관리함
//입력:각 메뉴로 가기위한 옵션
//출력:메뉴화면 프린트
//리턴값:없음
//최종수정일:2017-02-25

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#include  <malloc.h>
#include "SeoulSubway.h"
#include "mydef.h"



int main() {
	
	int s = 0, Destnumber=0, long_destnumber = 0, short_destnumber = 0; //도착역번호, 최장시간,최단시간
	int i = 0, T =0;
	char *numberName[400];	//역정보를 저장하는 포인터배열
	char start[20];         //시작역
	char dest[20];			//도착역
	char Al_option;			
	int Prefer_count=0;
	int nheap = 0;int parent[MAX];int heap[MAX];int check1[MAX];	//힙의 자료수 , 전역 노드 저장, 힙,방문여부 가중치
	node *station[MAX];Subway *new = NULL;Subway *head = NULL;Subway *tail = NULL;  //각 역의 포인터
	node *t = (node*)malloc(sizeof(node*));
	Subway *Subway_Struct= NULL; 


	for (i = 0; i < 358; i++) {										// station 포인터배열 초기화
		station[i] = NULL;			
	}
	
	int option=0;
	File_io(t, numberName, station, head, tail,new);  //파일에서 데이터 불러와 가공

	
	
	system("mode con:lines=34 cols=110");								//콘솔 창 크기 조절
	Main_print(option);
	while (1) {
		scanf_s("%d", &option);
		switch (option)
		{

		case 1:
		{
			Short_line_F(t,numberName,station,start,dest,check1,heap,parent,option,Destnumber);			//최단거리
			break;
		}
		case 2: {
			Short_recommend_F(t, numberName, station, start, dest, check1, heap, parent, option, Destnumber,short_destnumber,T);  //추천
			break;
		}
		case 3:	system("cls");
			Short_trans_F(t, numberName, station, start, dest, check1, heap, parent, option, Destnumber, short_destnumber, T); //최소환승
				break;
		case 4:	system("cls");
			Longest_line_F(t, numberName, station, start, dest, check1, heap, parent, option, Destnumber, long_destnumber, T); //최장
				break;

		case 5:	system("cls");
			compare_line_F(t, numberName, station, start, dest, check1, heap, parent, option, Destnumber,T);  //노선 비교
			
			break;	
		case 6:
			system("cls"); 
			Prefer_line(&Prefer_count);																		//선호노선
			break;
		case 7:
			break;
		case 8:system("cls");
			Administer_login();																				//관리자로그인 후에 관리자 모드 함수 실행
			system("cls");
			Administer_mode(Subway_Struct);
			break;
		case 9:
				exit(1);
			break;

		default:
			break;
		}
	}
	system("pause");
	
}