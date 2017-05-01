//함수이름:Option_Print
//함수기능:각 기능별 메뉴를 출력해준다
//입력:main함수에서 메뉴로 넘어가기위해 입력한 option
//출력:각 사용자 기능별 메뉴
//리턴값:없음
//최종수정일:2017-02-18

#include <stdio.h>


void Option_Print(int option) {
	

	switch (option)
	{

	case 1:	printf("\n");
			printf(" □■□■□■□■□■□■\n");
			printf(" ■  최단거리 노선검색 □\n");
			printf(" □■□■□■□■□■□■\n");
			printf("\n");
			break;

	case 2:	printf("\n");
			printf(" □■□■□■□■□■□■\n");
			printf(" ■    추천 노선검색   □\n");
			printf(" □■□■□■□■□■□■\n");
			printf("\n");
			break;

	case 3:printf("\n");
			printf(" □■□■□■□■□■□■\n");
			printf(" ■  최소환승 노선검색 □\n");
			printf(" □■□■□■□■□■□■\n");
			printf("\n");
			break;
	case 4:	printf("\n");
			printf(" □■□■□■□■□■□■\n");
			printf(" ■  최장시간 노선검색 □\n");
			printf(" □■□■□■□■□■□■\n");
			printf("\n");
			break;

	case 5:	printf("\n");
			printf(" □■□■□■□■□■□■\n");
			printf(" ■      노선비교      □\n");
			printf(" □■□■□■□■□■□■\n");
			printf("\n");
			break;
	case 6:	printf("\n");
		printf(" □■□■□■□■□■□■\n");
		printf(" ■    선호노선등록    □\n");
		printf(" □■□■□■□■□■□■\n");
		printf("\n");
		break;

	default:
		break;
	}
}