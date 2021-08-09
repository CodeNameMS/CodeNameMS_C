// ch19_macro.c

#include <stdio.h>
/*
macro
- ���α׷����� ���� ���Ǵ� ���, ������ �ڵ忡 �̸��� �ٿ��� ����ϴ� �� �Դϴ�.
	> #define ��ũ�θ� ��ȯ�ڵ�

*/
#define PI 3.141592
#define CIRCLE_AREA(r) r * r * PI
#define ARRAY_LENGTH 3

int main() {

	printf("������ : %f\n", PI);
	printf("������ 5�� ���� ���� : %f\n", CIRCLE_AREA(5.0));

	int arr[ARRAY_LENGTH] = { 0 };

	for (int i = 0; i < ARRAY_LENGTH; i++) {
		arr[i] = i + 1;
		printf("%4d", arr[i]);
		if ((i + 1) % 10 == 0)
			puts("");
	}
	puts("");
}