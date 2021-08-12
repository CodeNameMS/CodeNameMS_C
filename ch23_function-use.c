// ch23_function-use.c

#include <stdio.h>

#define True 1;
#define False 0;

//int InputInteger();
//int LastTotal(int last);
//
//int main() {
//
//	int a;
//	printf("숫자 입력 > "); scanf_s("%d", &a);
//	printf("a : %d\n", a);
//	puts("");
//
//	int b = InputInteger();
//	printf("b : %d\n", b);
//
//	int sum = LastTotal(b);
//	printf("1~%d까지의 합 : %d\n", b, sum);
//
//}
//
//int LastTotal(int last) {
//	int sum = 0;
//	for (int i = 1; i <= last; i++) {
//		sum += i;
//	}
//	return sum;
//}
//
//int InputInteger() {
//	int value;
//	printf("숫자 입력 > "); scanf_s("%d", &value);
//	while (getchar() != '\n');
//	return value;
//}

// ------------------------------------------------------------------

//char InputSubject();
//int ShowSubject(char subject);
//
//int main() {
//
//	char subject = InputSubject();
//	//ShowSubject(subject);
//
//	if (ShowSubject(subject))
//		puts("열공하세요~ ^^");
//	else
//		puts("다시 선택하세요..");
//}
//
//int ShowSubject(char subject) {
//  int res = True;
//	switch (subject) {
//	case 'C':
//		puts("C언어를 선택하셨습니다..");
//		//break;
//		return 1;
//		return True;
//	case 'J':
//		puts("Java를 선택하셨습니다..");
//		//break;
//		return 1; // 반환 값이 없으면 사용 가능(리턴값이 없을 경우), 즉시 함수 종료 후 리턴값을 반환함.
//		return True;
//	default:
//		res = False;
// }
//	puts("- End -");
//	return False;
//}
//
//char InputSubject() {
//	char subject;
//	printf("C언어 : C, Java : J 선택 > "); subject = getchar();
//	while (getchar() != '\n');
//	return subject;
//}

// -----------------------------------------------------------------

void FirstFunc();
void SecondFunc();

int main() {

	FirstFunce();
}

void FirstFunc() {
	puts("- FirstFunc() -");
	SecondFunc();
}

void SecondFunc() {
	puts("- SecondFunc() -");
}

// 함수의 실행은 호출한 순서대로 실행되지만, 종료는 역순으로 진행됨.