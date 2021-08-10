// ch21_variable-lifeCycle

#include <stdio.h>

/*
지역 변수
- 함수 or {}안에 선언된 변수입니다.
- 해당 지역이 실행되고 있을때만 사용이 가능합니다.
*/

//int main() {
//
//	int a = 10;
//	printf("main a : %d - 주소 : %p\n", a, &a);
//
//	for (int i = 0; i < 2; i++) {
//		int a = 1;
//		printf("for a : %d - 주소 : %p\n", a, &a);
//		a += 10;
//	}puts("");
//
//	printf("main a : %d - 주소 : %p\n", a, &a);
//}

// ------------------------------------------
int g;
void TestFunc(); // 함수 선언

int main() {

	printf("전역 g : %d - wnth : %p\n", g, &g);

	int v = 5;
	printf("main v : %d - 주소 : %p\n", v, &v);

	TestFunc();
	TestFunc();

}

void TestFunc() { // 함수 정의

	int v = 1;
	printf("func v : %d - 주소 : %p\n", v, &v);
	v += 10; // 지역 변수는 맨 마지막 값을 유지하지 못함.
}

