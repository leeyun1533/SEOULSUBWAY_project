//함수이름:gotoxy
//함수기능:메뉴를 콘솔창가운데 출력하기 위한 함수
//입력:없음
//출력:없음
//리턴값:좌표값
//최종수정일:2017-02-13

#include <Windows.h>

void gotoxy(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}