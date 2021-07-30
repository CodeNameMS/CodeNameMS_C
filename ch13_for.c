// ch13_for

#include <stdio.h>
/*
for문
- for ( 초기식 ; 조건식 ; 증감식 ) {
		실행코드
  }

  >반복의 횟수가 지정되어 있을 때 사용합니다.
  >초기식 : for문의 실행 횟수를 확인하는 변수의 선언과 시작값 설ㄹ정
            for문 시작과 동시에 한번만 실행
   조건식 : for문의 실행 확인
*/
//int main() {
//
//	for (int i = 1; i <= 5; i++) {
//
//		printf("%d\n", i);
//	}
//	puts("");
//
//	// 1(한번실행 -> 2(참) -> 3 -> 4
//	//			  -> 2(참) -> 3 -> 4
//	//			  ......
//	//			  -> 2(거짓) -> 종료
//
//	for (int i = 5; i >= 1; i--) {
//		printf("%d\n", i);
//	}
//}

// ------------------------------------------

/*
1 ~ n 까지의 합
*/

//int main() {
//
//	int last = 10;
//	int sum = 0;
//
//	for (int i = 1; i <= last; i++) {
//		sum += i;
//	}
//	printf("1 ~ %d 까지의 합 : %d\n", last, sum);
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
//	printf("%d의 배수 갯수 : %d\n", n, count);
//
//	for (int i = n; i <= 30; i += n) {
//		printf("%d\n", i);
//	}
//}
//int main() {
//
//	int dan = 5;
//	printf("- %d 단 -\n", dan);
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
//		printf("- %d 단 - \n", dan);
//		for (int i = 1; i <= 9; i++) {
//			printf("%d x %d = %d\n", dan, i, dan * i);
//		}
//		puts("");
//	}
//}
