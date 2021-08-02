// ch14_while

#include <stdio.h>
/*
while문
- while ( 조건식 ) {
		실행코드
  }

  > 반복의 실행 조건만을 알고 있을때 사용합니다.

do while문
- do{
	실행코드
  } while( 조건식 );
  
  > 반복문의 코드를 먼저 실행하고, 조건식을 확인합니다.
	그렇기 때문에 반복문의 코드를 무조건 한번은 실행하게 됩니다.

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
//		printf("숫자 입력 : "); scanf_s("%d", &value);
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
//		printf("숫자 입력 (종료 : 0) : ");
//		scanf_s("%d", &data);
//		if (data == 0)
//			break;
//		tot += data;
//	}
//	printf("합 : %d\n", tot);
//}


//int main() {
//
//	int val;
//	int sum = 0;
//
//	do {
//		printf("숫자 입력( 종료 : 0 ) : ");
//		scanf_s("%d", &val);
//		sum += val;
//	} while (val != 0);
//	printf("합 :%d\n", sum);
//}

//int main() {
//
//	int line = 1;
//	int no = 1;
//
//	while (line <= 3) {
//
//		printf("%d 라인 : ", line);
//		no = 1;
//		while (no <= 5) {
//			printf("%d ", no);
//			++no;
//		}
//		puts("");
//		++line;
//	}
//}