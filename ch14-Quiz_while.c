// ch14-Quiz_while.c

#include <stdio.h>

int main() {

	// ������ ���� �Է¹޾Ƽ� �ش� ���� ���� ��� ����ϴ� �ڵ带 �ۼ��ϼ���
	// - 2 ~ 9 �� ������ ���� �ƴϸ� ��µ��� �ʽ��ϴ�

	/*int su1, su2 = 1;
	printf("����� �������� �� �Է�(2~9) : "); scanf_s("%d", &su1);
	if (su1 > 1 && su1 < 10) {
		while (su2<=9) {
			printf("%d * %d = %d\n", su1, su2, su1 * su2);
			++su2;
		}
	}
	else {
		printf("2~9 ������ ���� �ƴմϴ� !");
	}
}*/
	// ����, ����(m, f)�� �Է¹޾Ƽ� ����ϴ� �ڵ带 �ۼ��ϼ���
	// - ���� : 0 ~ 130 ���̸� ó�� �����մϴ�
	// ���� : m, f�� ó�� �����ϰ�, m �̸� "����", f �̸� "����"���� ����ϼ���

	/*int age;
	char sex;
	printf("���� �Է� : "); scanf_s("%d", &age);
	if (age >= 0 && age <= 130) {
		getchar();
		printf("���� �Է� : "); sex = getchar();
		if (sex == 'm' || sex == 'f' || sex == 'M' || sex == 'F') {
			if (sex == 'm' || sex == 'M') {
				printf("���� : ����\n");
			}
			else
				printf("���� : ����\n");
			printf("���� : %d\n", age);
		}
		else
			printf("���� �߸� �Է� !");
	}
	else
		printf("���� �߸� �Է� ! ");*/

//	int age;
//	char sex;
//
//	printf("���� �Է� : "); sex = getchar();
//
//	while (sex == 'm' || sex == 'f' || sex == 'M' || sex == 'F') {
//		if (sex == 'm' || sex == 'M') {
//			printf("���� : ����\n");
//			break;
//		}
//		else
//			printf("���� : ����\n");
//	}
//
//
//	printf("���� �Է� : "); scanf_s("%d", &age);
//	while (age >= 0 && age <= 130) {
//		printf("���� : %d", age);
//		break;
//	}


	// ���� 3���� �Է��ް�, �Է¹��� ������ ���� ���ϴ� �ڵ带 �ۼ��ϼ���
	// ���ϴ� ���� +(plus)�� �����ϰ�, �Է� ���� ��� ����Ǿ� ���� �ʾƵ� �˴ϴ�

	/*int su1, result=0, i=0;
	
	do {
		printf("���� �Է��ϼ��� : "); scanf_s("%d", &su1);
		result += su1;
		printf("result(���� ��)�� �� : %d\n", result);
		i++;
	} while (i!=3);*/

	// ġ�� 10box�� ����Ǿ� �ִ� â�� ��(�ϼ� 1��)�� ��� �ֽ��ϴ�
	// �� �Ѹ����� �Ϸ翡 ���� �� �ִ� ġ���� ���� 20g �̰�, ġ� ���� 10�ϸ��� ���� ���� 2�辿 �����մϴ�
	// ���ϸ��� â���� ġ� ��� ��������, �̶������� ��� ��� ��� ������ ���ϴ� �ڵ带 �ۼ��ϼ���
	// - ġ�� 1box : 1kg
	
	/*int cheez = 10, day=0, mouse=2;
	cheez = 10 * 1000;

	do {
		cheez = cheez - (mouse*20);
		if (day % 10 == 0 && day != 0)
			mouse *= 2;
		++day;
	} while (cheez >= 0);
	printf("ġ� ����� �� : %d��\n", day);
	printf("�� ���� �� : %d����", mouse);
}*/