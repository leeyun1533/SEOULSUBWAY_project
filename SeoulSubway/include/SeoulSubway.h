#include "mydef.h"

typedef struct SeoulSubway {
	char *station[NAME];
	char *station2[NAME];
	char *station_RE[NAME];
	int Main[MAX];
	int sub[MAX];
	int weigh[MAX];
	int i;
}Subway;


typedef struct _node {
	struct _node *next;
	int number;
	int weight;
}node;

typedef struct Fv_line {
	char FvlineName[20][20];
	char FvStationName[20][40];
}Fv;


