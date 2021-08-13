// ch25_Quiz_pointer-function.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define VALUE_LENGTH 3

void InputText(char* text, int size) {
	printf("���� �Է��ϼ��� : ");
	scanf_s("%s", text, size);
}

void AlterText(char* text, int length) {

	for (int i = 0; i < length; i++) {
		if (text[i] >= 90 && text[i] <= 122) {
			text[i] -= 32;
		}
	}
}

void Random(int value[]) {

	for (int i = 0; i < VALUE_LENGTH; i++) {
		value[i] = rand() % 5 + 1;
		printf("%2d", value[i]);
	}
	puts("");
}

int CompareCheck(int value[]) {
	int p = value[0];
	for (int i = 1; i < VALUE_LENGTH; i++) {
		if (p != value[i])
			return 0;
	}
	return 1;
}

int main() {

	//// �Ʒ��� �迭�� ���� �Է��ϴ� �Լ��� �����ϼ���
	//// �Ʒ��� �迭�ȿ� �� �߿��� �ҹ��ڴ� �빮�ڷ� ��ȯ�ϴ� �Լ��� �����ϼ���.
	//char text[50] = { 0 };
	//int length = sizeof(text) / sizeof(text[0]);
	//InputText(text, sizeof(text));
	//printf("�Է� ���� �� : %s\n", text);
	//
	//AlterText(text, length);
	//printf("�� -> �빮�� ��ȯ : %s\n", text);



	// �Ʒ��� �迭�� 1 ~ 5 ������ ���������� �ʱ�ȭ�ϴ� �Լ��� �����ϼ���
	// ���� �Լ��� ����ؼ� �迭�ȿ� �ѹ��� ��� ���� ���� �������� �����ϴ� �Լ��� �����ϼ���
	int value[VALUE_LENGTH] = { 0 };
	int count = 0;

	srand((unsigned)time(NULL));

	while (1) {
		count++;
		Random(value);
		if (CompareCheck(value))
			break;
	}
	printf("%dȸ", count);
}