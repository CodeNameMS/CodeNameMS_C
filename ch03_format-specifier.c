//ch03_format-specifier.c

#include <stdio.h>
/*
����������
- printf()�Լ����� ����� ������ ������ ����ڰ� ������ �� ����մϴ�.

���� : %d
�Ǽ� : %f
���� : %c -> 1byte(�ѱ�X, �ѱ��� 2byte���� ����)
���ڿ� : %s -> ���ĺ� 2���ں���, �ѱ�
*/

int main()
{
	printf("10+10\n");
	printf("���� : %d\n", 10);
	printf("12 + 3 = %d\n", 12 + 3);
	printf("%d + %d = %d\n", 12, 3, 12 + 3);
	printf("\n");

	printf("�Ǽ� : %.2f\n", 1.2);
	printf("\n");

	printf("���� : %c\n", 'A');
	//1byte ������ ǥ��ÿ��� ' '��ȣ�� ����մϴ�.
	printf("\n");

	printf("���ڿ� : %s, %s\n", "eng", "�ѱ�");
	//���ڿ� ������ ǥ��ÿ��� " "��ȣ�� ����մϴ�.
	printf("\n");

	printf("�̸� : %s\n", "��μ�");
	printf("���� : %d\n", 27);
	printf("���� : %c\n", 'M');
	printf("Ű : %.1f\n", 175.2);
}