//함수이름:Main_print
//함수기능:main함수의 메뉴를 나타내주는 함수
//입력:없음
//출력:main메뉴
//리턴값:없음
//최종수정일:2017-02-13


#include <stdio.h>
void Main_print(int option) {



	printf("\n");
	printf("          #####   #######    ###    #     #  #                 #     #  #######  #######  ######     ###   \n");
	printf("         #     #  #         #   #   #     #  #                 ##   ##  #           #     #     #   #   #  \n");
	printf("         #        #        #     #  #     #  #                 # # # #  #           #     #     #  #     # \n");
	printf("          #####   #####    #     #  #     #  #                 #  #  #  #####       #     ######   #     # \n");
	printf("               #  #        #     #  #     #  #                 #     #  #           #     #   #    #     # \n");
	printf("         #     #  #         #   #   #     #  #                 #     #  #           #     #    #    #   #  \n");
	printf("          #####   #######    ###     #####   ######            #     #  #######     #     #     #    ###   \n");

	gotoxy(50,10);
	printf("제작자:이정윤\n");
	gotoxy(50, 13);
	printf("버전:  V0.1\n");
	gotoxy(50, 14);
	printf("1.최단시간노선\n");
	gotoxy(50, 15);
	printf("2.추천노선\n");
	gotoxy(50, 16);
	printf("3.최소환승노선\n");
	gotoxy(50, 17);
	printf("4.최장시간노선\n");
	gotoxy(50, 18);
	printf("5.노선비교\n");
	gotoxy(50, 19);
	printf("6.선호구간설정\n");
	gotoxy(50, 20);
	printf("7.환경설정\n");
	gotoxy(50, 21);
	printf("8.관리자메뉴\n");
	gotoxy(50, 22);
	printf("9.프로그램 종료\n");
	gotoxy(50, 23);
	printf("선택\n");



}