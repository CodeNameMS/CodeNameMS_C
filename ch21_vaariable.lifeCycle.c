// ch21_variable-lifeCycle

#include <stdio.h>

/*
���� ����
- �Լ� or {}�ȿ� ����� �����Դϴ�.
- �ش� ������ ����ǰ� �������� ����� �����մϴ�.
*/

//int main() {
//
//	int a = 10;
//	printf("main a : %d - �ּ� : %p\n", a, &a);
//
//	for (int i = 0; i < 2; i++) {
//		int a = 1;
//		printf("for a : %d - �ּ� : %p\n", a, &a);
//		a += 10;
//	}puts("");
//
//	printf("main a : %d - �ּ� : %p\n", a, &a);
//}

// ------------------------------------------
int g;
void TestFunc(); // �Լ� ����

int main() {

	printf("���� g : %d - wnth : %p\n", g, &g);

	int v = 5;
	printf("main v : %d - �ּ� : %p\n", v, &v);

	TestFunc();
	TestFunc();

}

void TestFunc() { // �Լ� ����

	int v = 1;
	printf("func v : %d - �ּ� : %p\n", v, &v);
	v += 10; // ���� ������ �� ������ ���� �������� ����.
}

