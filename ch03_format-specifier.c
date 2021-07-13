//ch03_format-specifier.c

#include <stdio.h>
/*
서식지정자
- printf()함수에서 출력할 데이터 형식을 사용자가 지정할 때 사용합니다.

정수 : %d
실수 : %f
문자 : %c -> 1byte(한글X, 한글은 2byte부터 시작)
문자열 : %s -> 알파벳 2글자부터, 한글
*/

int main()
{
	printf("10+10\n");
	printf("정수 : %d\n", 10);
	printf("12 + 3 = %d\n", 12 + 3);
	printf("%d + %d = %d\n", 12, 3, 12 + 3);
	printf("\n");

	printf("실수 : %.2f\n", 1.2);
	printf("\n");

	printf("문자 : %c\n", 'A');
	//1byte 데이터 표기시에는 ' '기호를 사용합니다.
	printf("\n");

	printf("문자열 : %s, %s\n", "eng", "한글");
	//문자열 데이터 표기시에는 " "기호를 사용합니다.
	printf("\n");

	printf("이름 : %s\n", "김민석");
	printf("나이 : %d\n", 27);
	printf("성별 : %c\n", 'M');
	printf("키 : %.1f\n", 175.2);
}