// ch13_for

#include <stdio.h>
/*
for��
- for ( �ʱ�� ; ���ǽ� ; ������ ) {
		�����ڵ�
  }

  >�ݺ��� Ƚ���� �����Ǿ� ���� �� ����մϴ�.
  >�ʱ�� : for���� ���� Ƚ���� Ȯ���ϴ� ������ ����� ���۰� ������
            for�� ���۰� ���ÿ� �ѹ��� ����
   ���ǽ� : for���� ���� Ȯ��
*/
//int main() {
//
//	for (int i = 1; i <= 5; i++) {
//
//		printf("%d\n", i);
//	}
//	puts("");
//
//	// 1(�ѹ����� -> 2(��) -> 3 -> 4
//	//			  -> 2(��) -> 3 -> 4
//	//			  ......
//	//			  -> 2(����) -> ����
//
//	for (int i = 5; i >= 1; i--) {
//		printf("%d\n", i);
//	}
//}

// ------------------------------------------

/*
1 ~ n ������ ��
*/

//int main() {
//
//	int last = 10;
//	int sum = 0;
//
//	for (int i = 1; i <= last; i++) {
//		sum += i;
//	}
//	printf("1 ~ %d ������ �� : %d\n", last, sum);
//}

// -----------------------------------------------

//int main() {
//
//	int n = 3;
//	int count = 0;
//
//	for (int i = 1; i <= 30; i++) {
//		if (i % n == 0) {
//			printf("%d\n", i);
//			++count;
//		}
//
//	}
//	puts("");
//	printf("%d�� ��� ���� : %d\n", n, count);
//
//	for (int i = n; i <= 30; i += n) {
//		printf("%d\n", i);
//	}
//}
//int main() {
//
//	int dan = 5;
//	printf("- %d �� -\n", dan);
//	puts("");
//
//	for (int i = 1; i <= 9; i++) {
//		printf("%d x %d = %d\n", dan, i, dan * i);
//	}
//}

// ------------------------------------------

//int main() {
//
//	//for (int line = 0; line < 3; line++) {
//
//	//	for (int i = 1; i <= 5; i++) {
//	//		printf("%d", i);
//	//	}
//	//	puts("");
//	//}
//
//	for (int dan = 2; dan <= 9; dan++) {
//
//		printf("- %d �� - \n", dan);
//		for (int i = 1; i <= 9; i++) {
//			printf("%d x %d = %d\n", dan, i, dan * i);
//		}
//		puts("");
//	}
//}
