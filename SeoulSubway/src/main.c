//�Լ��̸�:main
//�Լ����:main�Լ��ν� �ٸ��Լ����� ȣ���ϰ� ������
//�Է�:�� �޴��� �������� �ɼ�
//���:�޴�ȭ�� ����Ʈ
//���ϰ�:����
//����������:2017-02-25

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>

#include  <malloc.h>
#include "SeoulSubway.h"
#include "mydef.h"



int main() {
	
	int s = 0, Destnumber=0, long_destnumber = 0, short_destnumber = 0; //��������ȣ, ����ð�,�ִܽð�
	int i = 0, T =0;
	char *numberName[400];	//�������� �����ϴ� �����͹迭
	char start[20];         //���ۿ�
	char dest[20];			//������
	char Al_option;			
	int Prefer_count=0;
	int nheap = 0;int parent[MAX];int heap[MAX];int check1[MAX];	//���� �ڷ�� , ���� ��� ����, ��,�湮���� ����ġ
	node *station[MAX];Subway *new = NULL;Subway *head = NULL;Subway *tail = NULL;  //�� ���� ������
	node *t = (node*)malloc(sizeof(node*));
	Subway *Subway_Struct= NULL; 


	for (i = 0; i < 358; i++) {										// station �����͹迭 �ʱ�ȭ
		station[i] = NULL;			
	}
	
	int option=0;
	File_io(t, numberName, station, head, tail,new);  //���Ͽ��� ������ �ҷ��� ����

	
	
	system("mode con:lines=34 cols=110");								//�ܼ� â ũ�� ����
	Main_print(option);
	while (1) {
		scanf_s("%d", &option);
		switch (option)
		{

		case 1:
		{
			Short_line_F(t,numberName,station,start,dest,check1,heap,parent,option,Destnumber);			//�ִܰŸ�
			break;
		}
		case 2: {
			Short_recommend_F(t, numberName, station, start, dest, check1, heap, parent, option, Destnumber,short_destnumber,T);  //��õ
			break;
		}
		case 3:	system("cls");
			Short_trans_F(t, numberName, station, start, dest, check1, heap, parent, option, Destnumber, short_destnumber, T); //�ּ�ȯ��
				break;
		case 4:	system("cls");
			Longest_line_F(t, numberName, station, start, dest, check1, heap, parent, option, Destnumber, long_destnumber, T); //����
				break;

		case 5:	system("cls");
			compare_line_F(t, numberName, station, start, dest, check1, heap, parent, option, Destnumber,T);  //�뼱 ��
			
			break;	
		case 6:
			system("cls"); 
			Prefer_line(&Prefer_count);																		//��ȣ�뼱
			break;
		case 7:
			break;
		case 8:system("cls");
			Administer_login();																				//�����ڷα��� �Ŀ� ������ ��� �Լ� ����
			system("cls");
			Administer_mode(Subway_Struct);
			break;
		case 9:
				exit(1);
			break;

		default:
			break;
		}
	}
	system("pause");
	
}