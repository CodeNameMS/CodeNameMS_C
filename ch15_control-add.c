// ch15_control-add

#include <stdio.h>
/*
삼항 연산자
- ( 조건식 ) ? 값_a(참) : 값_b(거짓)

	> 조건식이 참이면 ? 뒤에 왼쪽의 값을 사용하고, 거짓이면 오른쪽의 값을 사용합니다.


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
- 실행중인 제어문을 종료 시킬 때 사용합니다.
	> switch, for, while, do while
- break; 문과 가까운 제어문 하나만 종료됩니다.
*/

//int main() {
//	for (int out = 1; out <= 3; out++) {
//
//		printf("%d 회전 : ", out);
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
- 진행중인 반복문에서 continue 문이 실행되면, 현재 진행중인 반복문의 실행을 멈추고 다음 반복으로 넘어갑니다.
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