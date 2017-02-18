#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>


#include  "C:\Users\leejungyun\Documents\Visual Studio 2013\Projects\SeoulSubway\SeoulSubway\SeoulStruct.h"


long weight_data[600][600];

int main() {
	int s = 0, e = 0;
	Subway *new = NULL;
	Subway *head = NULL;
	Subway *tail = NULL;


	Subway *Subway_Struct = (Subway*)malloc(sizeof(Subway*));
	Subway *station[600];
	if (Subway_Struct == NULL) {
		printf("�޸����Ҵ�����");
	}
	for (s = 0; s<600; s++) {
		for (e = 0; e<600; e++) {
			if (s == e)
				weight_data[s][e] = 0;
			else
				weight_data[s][e] = 9999;
		}
	}

	for (s = 0; s < 10; s++) {
		for (e = 0; e < 10; e++) {
			printf("%d", weight_data[s][e]);
		}printf("\n");
	}






	int option = 0;


	Subway_Struct = File_io(head, tail,station, &s, &e);

	



	Main_print(option);
	while (1) {
		scanf_s("%d", &option);
		switch (option)
		{

		case 1:
		{
			system("cls");
			Short_time_line(weight_data);
			break;
		}
		case 2:Recommend_line();
			break;
		case 3:Least_trans_line();
			break;
		case 4:Longest_time_line();
			break;
		case 5:compare_line();
			break;
		case 6:Prefer_line();
			break;
		case 7:Setting();
			break;
		case 8:system("cls");
			Administer_mode(Subway_Struct, head, tail, new);
			break;
		case 9:Program_exit_save();
			break;

		default:
			break;
		}
	}
	system("pause");

}
