// ch11_if-else if.c

#include <stdio.h>
/*
if ~ else if문
- if ( 조건식_a ) {
	    조건식_a가 참이면 실행 후 종료
  }
  else if( 조건식_b ) {
		조건식_a 거짓, 조건식_b가 참이면 실행 후 종료
  }
  .......
  else {
		상위에 모든 조건식이 거짓이면 실행 ( 사용O, X)
  }

  > 특정값을 찾거나, 하나의 구간을 세분화해서 나눌 때 사용합니다.
  > 범위가 겹칠 경우 큰 범위의 구간을 코드의 가장 상위에 사용합니다.
*/
//int main() {
//
//	int value = 5;
//	printf("vlaue : %d\n", value);
//	puts("");
//
//	puts("- if 여러개 -");
//	if (value > 0)
//		puts("0보다 큰수");
//	if (value > 10)
//		puts("0보다 큰수");
//	if (value > 20)
//		puts("0보다 큰수");
//	puts("");
//
//	puts("- if ~ else if -");
//	if (value > 0)
//		puts("0보다 큰수");
//	else if (value > 10)
//		puts("0보다 큰수");
//	else if (value > 20)
//		puts("0보다 큰수");
//	puts("");
//}

//int main() {
//
//	int data = 7;
//	printf("data : %d\n", data);
//	puts("");
//
//	if (data >= 1 && data <= 10)
//		puts(" 1 ~ 10 ");
//	if (data >= 11 && data <= 20)
//		puts(" 11 ~ 20 ");
//	if (data >= 21 && data <= 30)
//		puts(" 21 ~ 30 ");
//	puts("");
//
//	if (data >= 1 && data <= 10)
//		puts(" 1 ~ 10 ");
//	else if (data <= 20)
//		puts(" 11 ~ 20 ");
//	else if (data <= 30)
//		puts(" 21 ~ 30 ");
//	puts("");
//}

int main() {

	int n = 9;
	printf("n : %d\n", n);
	puts("");

	if (n % 3 == 0 && n % 5 == 0)
		puts("3 and 5의 배수");
	else if (n % 3 == 0)
		puts("3의 배수");
	else if (n % 5 == 0)
		puts("5의 배수");
	puts("");

}