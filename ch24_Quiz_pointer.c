// ch24_Quiz_pointer

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// �Ʒ� ������ �ּҸ� ������ �����͸� �����ϰ�, �����͸� ����ؼ� ������ ���� �Է��ϴ� �ڵ带 �ۼ��ϼ���
	/*char ch;
	double da;

	char* pch = &ch;
	double* pda = &da;

	printf("���� �Է� : "); *pch = getchar();
	while (getchar() != '\n');
	printf("�Ǽ� �Է� : "); scanf_s("%lf", pda);

	printf("���� : %c\n", ch);
	printf("�Ǽ� : %.2f\n", da);*/

	// �Ʒ� �迭�� ��ġ�� ������ �����͸� �����ϰ�, �����͸� ����ؼ� �ش� �迭�� 1 ~ 20 ������ ���������� �ʱ�ȭ�ϰ�
	// ����ϴ� �ڵ带 �ۼ��ϼ���
	/*int data[10] = { 0 };
	int size = sizeof(data) / sizeof(data[0]);
	int* pdata = data;
	for (int i = 0; i < size; i++) {
		*(pdata + i) = rand() % 20 + 1;
		printf("%d\n", data[i]);
	}*/


	// �Ʒ� �迭�� ��ġ�� ������ �����͸� �����ϰ�, �����͸� ����ؼ� ���� �Է� �ް�
	// �迭�� ���� �� ���ھ� ����ϴ� �ڵ带 �ۼ��ϼ���.
	/*char text[20];
	char* ptext = text;
	int size_text = sizeof(text) / sizeof(text[0]);

	for (int i = 0; i < size_text; i++) {
		ptext[i] = getchar();
		while (getchar() != '\n');
	}
	for (int j = 0; j < size_text; j++) {
		printf("%c", text[j]);
	}*/

}