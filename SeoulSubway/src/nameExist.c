//
//�Լ��̸�:nameExist
//�Լ����:����ڰ� ���� �Է��Ҷ� ����ü�� ���� �ִ��� �˻��ϴ� �Լ�
//�Է�:���� �̸�
//���:����
//���ϰ�:���� ��ȣ
//����������:2017-02-19

int nameExist(char **numberName,char a[], int s) {
	int i;
	for (i = 0; i < s; i++) {				
		if (strcmp(a, numberName[i]) == 0) return i;			// �ٸ� �Լ����� �Ű������� �Ѿ�� a�� numberName�迭�� ���Ͽ� �˻��ȴٸ� �迭�� �ε������� ����				
	}
	return 0;
}