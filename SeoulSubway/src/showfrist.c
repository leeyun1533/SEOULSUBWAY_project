//함수이름:showfirst
//함수기능:알고리즘을 실행하기전 처음역과 도착역을 입력하여 구조체의 내용과 비교한다.
//입력:출발역 도착역
//출력:출발역,도착역 비교메시지
//리턴값:numberName,dest,start,역번호
//최종수정일:2017-02-24
//



#include <windows.h>

void showfirst(char **numberName, char dest[], char start[], int s) {
	while (1) {
		printf("출발역 입력\n");
		scanf("%s", dest);
		if ((strcmp(dest, start)))	break;
		else printf("잘못 입력하셨습니다. \n");
	}
	while (1)
	{
		printf("\n도착역을 입력하세요 \n");
		scanf("%s", start);																		//도착역입력
		int exist = nameExist(numberName, start, s);											//numberName 배열에 저장된 역이름중에 입력한 도착역이 있는지 확인
		if (exist != 0)
		{
			if (strcmp(dest, start) != 0)														
			{
				break;
			}
			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
				printf("ERROR");
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
				printf("출발역과 도착역이 같습니다\n");
			
			}
		}
		else
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("ERROR");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			printf(":잘못 입력하셨습니다.\n");
		}
	}
}