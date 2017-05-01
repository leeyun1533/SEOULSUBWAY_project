//함수이름:Administer_login
//함수기능:관리자 로그인 기능
//입력:비밀번호==check
//출력:비밀번호가 틀릴 시 에러 메시지
//리턴값:없음
//최종수정일:2017-02-26



#include <string.h>
#include <windows.h>
void Administer_login() {

	char Pw[10] = { "jung1571" };
	char check[10];
	printf("\n");
	printf(" □■□■□■□■□■\n");
	printf(" ■  관리자 로그인 □\n");
	printf(" □■□■□■□■□■\n");
	printf("\n");

	printf("PW:");
	scanf("%s", check);

	while (1){
		if (0 == strcmp(Pw, check)) 
		{	
			break;
		}

		else {
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_INTENSITY);
			printf("ERROR");
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
			printf("비밀번호가 틀립니다\n");
			scanf("%s", check);
		}
	}
}