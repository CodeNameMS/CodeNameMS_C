// ch15_control-add

#include <stdio.h>
/*
���� ������
- ( ���ǽ� ) ? ��_a(��) : ��_b(����)

	> ���ǽ��� ���̸� ? �ڿ� ������ ���� ����ϰ�, �����̸� �������� ���� ����մϴ�.


*/

//int main() {
//
//	int data = 7;
//	int abs = 0;
//
//	if (data > 0)
//		abs = data;
//	else
//		abs = data * -1;
//	printf("abs : %d\n", abs);
//
//}

// -----------------------------------

/*
break;
- �������� ����� ���� ��ų �� ����մϴ�.
	> switch, for, while, do while
- break; ���� ����� ��� �ϳ��� ����˴ϴ�.
*/

//int main() {
//	for (int out = 1; out <= 3; out++) {
//
//		printf("%d ȸ�� : ", out);
//		for (int i = 1; i <= 10; i++) {
//			printf("%d ", i);
//			if (i == 5)
//				break;
//		}
//		puts("");
//	}
//}

/*
continue
- �������� �ݺ������� continue ���� ����Ǹ�, ���� �������� �ݺ����� ������ ���߰� ���� �ݺ����� �Ѿ�ϴ�.
*/

//int main() {
//
//	int value = 0;
//	while (value < 21) {
//
//		++value;
//		if (value % 7 == 0) {
//			puts("lucky~");
//			continue;
//		}
//		printf("%d\n", value);
//	}
//	puts("");
//}

//int main() {
//
//	for (int step = 0; step < 21; step++) {
//		if (step % 7 == 0) {
//			continue;
//		}
//		printf("%d\n", step);
//	}
//}