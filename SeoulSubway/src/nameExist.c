//
//함수이름:nameExist
//함수기능:사용자가 역을 입력할때 구조체에 역이 있는지 검사하는 함수
//입력:역의 이름
//출력:없음
//리턴값:역의 번호
//최종수정일:2017-02-19

int nameExist(char **numberName,char a[], int s) {
	int i;
	for (i = 0; i < s; i++) {				
		if (strcmp(a, numberName[i]) == 0) return i;			// 다른 함수에서 매개변수로 넘어온 a와 numberName배열을 비교하여 검색된다면 배열의 인덱스값을 리턴				
	}
	return 0;
}