// ch20_Quiz_rand

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main() {

	// 10���� ������ �����ϴ� �迭�� �����ϰ�, 70 ~ 100 ������ ������ �ʱ�ȭ �մϴ�
	// �� �迭���� 80 ~ 90 ������ ���� � �ִ����� ���ϴ� �ڵ带 �ۼ��ϼ���

	/*int su1[10] = { 0 };
	srand(time(NULL));
	int count = 0;

	for (int i = 0; i < 10; i++) {
		su1[i] = rand() % 30 + 70;
		if (su1[i] >= 80 && su1[i] <= 90) {
			count++;
		}
		printf("%4d", su1[i]);
	}
	puts("");
	printf("80~90������ ���� ������ %d�� �Դϴ�.", count);*/


	// ���� 10���� ���� �迭�� �����ϰ�, 1 ~ 10 ������ ������ �ʱ�ȭ �մϴ�
	// �ߺ����� �� �� ������, ���� 7�� �ִ� ���� ��ġ�� ã�� �ڵ带 �ۼ��ϼ���

	//int data[10] = { 0 };
	//srand(time(NULL));

	//for (int i = 0; i < 10; i++) {
	//	data[i] = rand() % 10 + 1;
	//	for (int j = 0; j < i; j++) {
	//		if (data[i] == data[j]) {
	//			i--;
	//			break;
	//		}
	//	}
	//}

	//for (int i = 0; i < 10; i++) {
	//	printf("%4d", data[i]);
	//}
	//puts("");
	//for (int i = 0; i < 10; i++) {
	//	if (data[i] == 7) {
	//		printf("7�� ��ġ�� %d��°\n", i+1);
	//	}
	//}

	// ����� Ȯ�ΰ��� �����ϴ� �ڵ带 �ۼ��ϼ���
	// - ����� Ȯ�ΰ� : 0 ~ 9, A ~ Z �� 5�� �������� �̷���� �ֽ��ϴ�.
	// Ex) UE9G2, KLAJL, 90832

//	srand((unsigned int)time(NULL));
//	char data[6] = { 0 };
//
//	printf("����� Ȯ�ΰ� : ");
//	for (int i = 0; i < 5; i++) {
//		int a = rand() % 2;
//		if (a) {
//			data[i] = rand() % 26 + 65;  // 0~9 = 48 ~ 57 / A~Z = 65 ~ 90
//		}
//		else {
//			data[i] = rand() % 10 + 48;
//		}
//	}
//	printf("%s", data);
//	puts("");
//}

	//-------------------------------------------------------



	// 1~ 9 ������ ���� 2���� ������ ���� ���� �ϳ��� �����ϰ�, ������ ���ߴ� �ڵ带 �ۼ��ϼ���.
	// �� 3������ ������, ������ ������ �˷��ݴϴ�.

	srand((unsigned int)time(NULL));


	for (int i = 1; i < 4; i++) {
		int su1 = rand() % 9 + 1;
		int su2 = rand() % 9 + 1;
		int res = su1 + su2;
		int answer;

		printf("%d + %d = : ", su1, su2); scanf_s("%d", &answer);
		while (getchar() != '\n');

		if (res == answer)
			printf("���� ! \n");
		else
			printf("Ʋ�� ! \n");
	}
}
// �Լ�(Ex for��)�ȿ����� �� ������ �Լ� �ȿ� �����ϴ� ���� �ڵ尡 ���.