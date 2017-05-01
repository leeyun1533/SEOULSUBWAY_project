#include "mydef.h"
#include "SeoulSubway.h"

void compare_line_F(node *t, char **numberName, char *station[], char start[], char dest[], int  check1[], int  heap[], int  parent[], int  option, int Destnumber,int T) {
	Option_Print(option); showfirst(numberName, dest, start, 358);
	for (int z = 1; z < 3; z++) {
		int a = 0;
		Destnumber = Algorithm(t, numberName, station, start, dest, 358, check1, heap, parent, z); a++;
		if (Destnumber == -1) { printf("\nERROR 최단거리 실패"); }

		else {
			printPath(parent, numberName, check1, start, Destnumber, T);
		}
		printf("\n\n");
	}
}