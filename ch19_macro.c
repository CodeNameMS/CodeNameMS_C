// ch19_macro.c

#include <stdio.h>
/*
macro
- 프로그램에서 자주 사용되는 상수, 간단한 코드에 이름을 붙여서 사용하는 것 입니다.
	> #define 매크로명 변환코드

*/
#define PI 3.141592
#define CIRCLE_AREA(r) r * r * PI
#define ARRAY_LENGTH 3

int main() {

	printf("원주율 : %f\n", PI);
	printf("반지름 5인 원의 넓이 : %f\n", CIRCLE_AREA(5.0));

	int arr[ARRAY_LENGTH] = { 0 };

	for (int i = 0; i < ARRAY_LENGTH; i++) {
		arr[i] = i + 1;
		printf("%4d", arr[i]);
		if ((i + 1) % 10 == 0)
			puts("");
	}
	puts("");
}