/* [���׸� 1] : ��������
	��ǻ�����α׷��� ������� (���� 25��)
	�а� : ��ǻ�Ͱ��к�
	�й� : 202202745
	�̸� : ���ؼ�

	���� ���� : �ѱ��� �߱��� �ֱ� 5�ϰ� �ڷγ� Ȯ���� �� ��� �ڷ�


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Covid {	// [���׸� 5] : ����ü ���

	char name;
	int youryear;
};

int main(void)
{
	struct Covid s;
	
	char country;
	int number;
	int number2;

	printf("�ڷ� �˻� �� �ſ� Ȯ���� ���� �̸��� �Է����ּ��� : ");
	scanf("%s", &s.name);

	printf("�ڷ� �˻� �� �ſ� Ȯ���� ���� �ֹι�ȣ�� �Է����ּ��� : ");
	scanf("%s", &s.youryear);

	printf("�ֱ� 5�� �� �ڷγ� Ȯ���� ��Ȳ�� �ñ��� ������ �Է����ּ���. (�ѱ� : k �߱� : c) : ");
	scanf("%s", &country);

	if (country == 'k') {
		number = korea();
		printf("Ȯ���� ���� %d�� �Դϴ�.", number);
	}

	else if (country == 'c') {
		number2 = china();
		printf("Ȯ���� ���� %d�� �Դϴ�.", number2);
	}

	else {
		printf("�߸��� �Է��Դϴ�.");
	}
	return 0;
}

int korea(int x)	// [���׸� 2] : �Լ� ��� 
{
	int i, kor[5], day;
	printf("�ñ��� ���� 0���� 4���� ���ڷ� �Է��ϼ��� (5����(4) ~ ����(0) ) : ");
	scanf("%d", &day);

	kor[0] = 13355;		// [���׸� 3] : �迭 ��� 
	kor[1] = 12158;
	kor[2] = 9315;
	kor[3] = 8442;
	kor[4] = 7382;
	for (i = 0; i < 5; i++) {
		if (i == day)
			break;
	}
	x = kor[i];
	return x;
}

int china(int y)	// [���׸� 2] : �Լ� ��� 
{
	int j, chi[5], day1;
	printf("�ñ��� ���� 0���� 4���� ���ڷ� �Է��ϼ��� (5����(4) ~ ����(0) ) : ");
	scanf("%d", &day1);

	chi[0] = 46548;		// [���׸� 3] : �迭 ���
	chi[1] = 56231;
	chi[2] = 55432;
	chi[3] = 35601;
	chi[4] = 37940;
	for (j = 0; j < 5; j++) {
		if (j == day1)
			break;
	}
	y = chi[j];
	return y;
}