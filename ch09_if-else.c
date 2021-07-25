// ch09_if-else.c

#include <stdio.h>
/*
if else 문
- if ( 조건식 ) {
		조건식이 참이면 실행
  }
  else {
		조건식이 거짓이면 실행
  }

  > if문의 조건식이 참이면 if문의 코드를 실행하고, 조건식이 거짓이면 else문의 코드를 실행합니다.
    그렇기 때문에 둘 중 한 곳은 무조건 실행됩니다.
  > else 뒤에는 조건식을 사용할 수 없습니다.
*/
//int main() {
//
//	int n = 7;
//	printf("n : %d\n", n);
//	puts("");
//	
//	if (n % 2 == 1)
//		puts("홀수");
//	if (n % 2 == 0)
//		puts("짝수");
//}

int main() {

	int age = 18;
	printf("나이 : %d 세\n", age);
	puts("");

	if (age >= 19) {
		puts("투표 가능합니다~");
	}
	else {
		puts("아직 대상이 아니세요..");
	}
}