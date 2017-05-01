#include "mydef.h"

typedef struct SeoulSubway {
	char *station[NAME];
	char *station2[NAME];
	int Sub[MAX];

}Subway;

typedef struct _node {
	struct _node *next;
	int number;
	int weight;
}node;

typedef struct Linked {
	struct Linked *next;
	struct Linked *prev;
	char RE_station[NAME];
	int Main;
	int Sub;
	int weigh;
	char lestion;
}Linked_node;



typedef struct Fv_line {
	char Fv_lineName[10][20];
	char Fv_StationName[10][40];
}Fv;


