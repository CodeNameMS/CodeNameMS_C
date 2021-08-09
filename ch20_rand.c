// ch20_rand.c

#include <stdio.h>
#include <stdlib.h> // rand();
#include <time.h> // time(NULL);

/*
rand()
- rand()
	> 0 ~ 32767 사이의 숫자 하나를 자동으로 생성해서 반환하는 함수입니다.

srand()
- srand( 초기값 )
	> rand() 함수의 초기값을 설정해주는 함수입니다.

time()
- time(NULL)
	> 1970년 1월 1일 0시부터 현재까지의 시간을 초단위로 반환하는 함수입니다.
*/

int main() {

	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		int data = rand() % 10 + 1; // 범위 : rand() % 갯수 + 시작값
		printf("%d\n", data);
	}
	puts("");

	int a = rand() % 26 + 65;
	printf("%d, %c\n", a, a);

	while (1) {
		int r = rand();
		printf("%d\n", r);
		if (r == 0) {
			break;
		}
	}
}