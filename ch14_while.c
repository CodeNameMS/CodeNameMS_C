// ch14_while

#include <stdio.h>
/*
while��
- while ( ���ǽ� ) {
		�����ڵ�
  }

  > �ݺ��� ���� ���Ǹ��� �˰� ������ ����մϴ�.

do while��
- do{
	�����ڵ�
  } while( ���ǽ� );
  
  > �ݺ����� �ڵ带 ���� �����ϰ�, ���ǽ��� Ȯ���մϴ�.
	�׷��� ������ �ݺ����� �ڵ带 ������ �ѹ��� �����ϰ� �˴ϴ�.

*/
//int main() {
//
//	int i = 1;
//	while (i <= 5) {
//		printf("%d"\n, i);
//		++i;
//	}
//	puts("");
//
//	int down = 5;
//	while (down) {
//		printf("%d\n", down);
//		--down;
//	}
//}

// ----------------------------------

//int main() {
//
//	int cnt = 1;
//
//	while (1) {
//		printf("%d\n", cnt);
//		if (cnt > 9)
//			break;
//		++cnt;
//	}
//}

//--------------------------------

//int main() {
//
//	int no = 1;
//	int run = 1;
//
//	while (run) {
//		if (no > 9)
//			run = 0;
//		printf("%d\n", no);
//		++no;
//	}
//}

//int main() {
//
//	int value = -1;
//	
//	while (value < 0) {
//		printf("���� �Է� : "); scanf_s("%d", &value);
//		while (getchar() != '\n');
//	}
//	printf("value : %d\n", value);
//}

// -------------------------------------

//int main() {
//
//	int data = 0;
//	int tot = 0;
//
//	while (1) {
//		printf("���� �Է� (���� : 0) : ");
//		scanf_s("%d", &data);
//		if (data == 0)
//			break;
//		tot += data;
//	}
//	printf("�� : %d\n", tot);
//}


//int main() {
//
//	int val;
//	int sum = 0;
//
//	do {
//		printf("���� �Է�( ���� : 0 ) : ");
//		scanf_s("%d", &val);
//		sum += val;
//	} while (val != 0);
//	printf("�� :%d\n", sum);
//}

//int main() {
//
//	int line = 1;
//	int no = 1;
//
//	while (line <= 3) {
//
//		printf("%d ���� : ", line);
//		no = 1;
//		while (no <= 5) {
//			printf("%d ", no);
//			++no;
//		}
//		puts("");
//		++line;
//	}
//}