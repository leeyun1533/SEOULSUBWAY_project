//�Լ��̸�:Save_file
//�Լ����:��������
//�Է�:����
//���:�������� ����,���� �޽���
//���ϰ�:����
//����������:2017-02-20

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <string.h>
#pragma warning (disable:4996)
#define _GNU_SOURCE
#define _CRT_SECURE_NO_WARNINGS

#include "SeoulSubway.h"
#include "mydef.h"

void Save_file(Linked_node *head, Linked_node *tail, Linked_node *new, Linked_node *plist) {


	int fp;
	char exit = 'NULL';
	plist = tail->next;
	char Main_buf[100] = { NULL };
	char Sub_buf[100] = { NULL };
	char weigh_buf[100] = { NULL };
	char space[] = { '\n' }; 
	char tab[] = { '\t' };

	fp = open("Subway.txt", O_RDWR | O_APPEND);
	if (fp == -1) {
		printf("������ ���������ʽ��ϴ� ���� �����մϴ�\n");
		fp = open("Subway.txt", O_CREAT | O_RDWR | O_APPEND, S_IWRITE | S_IREAD);
	}


	while (plist != NULL) {
		itoa(plist->Main, Main_buf, 10);
		itoa(plist->Sub, Sub_buf, 10);
		itoa(plist->weigh, weigh_buf, 10);
		write(fp, Main_buf, strlen(Main_buf));
		write(fp, tab, sizeof(space));
		write(fp, Sub_buf, strlen(Sub_buf));
		write(fp, tab, sizeof(space));
		write(fp,weigh_buf,strlen(weigh_buf));
		write(fp, tab, sizeof(space));
		write(fp, plist->RE_station, strlen(plist->RE_station));
		write(fp, space, sizeof(space));
		printf("%s %s", Main_buf, plist->RE_station);
		plist = plist->next;

	}

	printf("�������忡 �����߽��ϴ�.");
	printf("�����޴��� ���ðڽ��ϱ�? YorN");
	scanf("%c", &exit);
	


};