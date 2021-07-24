// ch08_if.c

#include <stdio.h>
/*
제어문
- 위에서 아래로 순차적으로 실행되는 프로그램의 흐름을 변경 할 때 사용합니다.
*/

/*
if문
- if (조건식) {
	실행코드
  }
  
  > if문 뒤에 ()안의 조건식이 참이면 if문 안의 코드를 실행한 후 하위 코드를 진행합니다.
    조건식이 거짓이면 if문의 코드를 건너뛰고 하위 코드를 진행합니다.
  > 모든 제어문은 한줄까지는 자동으로 자신의 실행코드로 인식하지만, 2줄부터는 {}를 사용해서 지정해 주어야 합니다.
*/
//int main() {
//
//	int money = 2000;
//
//	if (money >= 2500) {
//		puts("떡볶이 사먹기~");
//		money -= 2500;
//	}
//	puts("집으로 go~");
//	printf("금액 : %d\n",money);
//}

// ------------------------------------

//int main() {
//
//	int data;
//	printf("숫자 입력 > "); scanf_s("%d", &data);
//	puts("");
//
//	if (data % 2 == 1)
//		puts("홀수");
//	if (data % 2 == 0)
//		puts("짝수");
//}

// ----------------------------------

int main() {

	int value = 5;
	printf("vlaue : %d\n", value);
	puts("");

	if (value >= 0) {
		puts("plus");
	}
	if (value < 0) {
		puts("minus");
	}
	if (value >= 1 && value <= 10) {
		puts("1 ~10");
	}
}