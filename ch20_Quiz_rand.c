// ch20_Quiz_rand

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int main() {

	// 10개의 정수를 저장하는 배열을 선언하고, 70 ~ 100 사이의 값으로 초기화 합니다
	// 위 배열에서 80 ~ 90 사이의 값이 몇개 있는지를 구하는 코드를 작성하세요

	/*int su1[10] = { 0 };
	srand(time(NULL));
	int count = 0;

	for (int i = 0; i < 10; i++) {
		su1[i] = rand() % 30 + 70;
		if (su1[i] >= 80 && su1[i] <= 90) {
			count++;
		}
		printf("%4d", su1[i]);
	}
	puts("");
	printf("80~90사이의 값의 갯수는 %d개 입니다.", count);*/


	// 정수 10개가 들어가는 배열을 선언하고, 1 ~ 10 사이의 값으로 초기화 합니다
	// 중복수는 들어갈 수 없으며, 숫자 7이 있는 곳의 위치를 찾는 코드를 작성하세요

	//int data[10] = { 0 };
	//srand(time(NULL));

	//for (int i = 0; i < 10; i++) {
	//	data[i] = rand() % 10 + 1;
	//	for (int j = 0; j < i; j++) {
	//		if (data[i] == data[j]) {
	//			i--;
	//			break;
	//		}
	//	}
	//}

	//for (int i = 0; i < 10; i++) {
	//	printf("%4d", data[i]);
	//}
	//puts("");
	//for (int i = 0; i < 10; i++) {
	//	if (data[i] == 7) {
	//		printf("7의 위치는 %d번째\n", i+1);
	//	}
	//}

	// 사용자 확인값을 생성하는 코드를 작성하세요
	// - 사용자 확인값 : 0 ~ 9, A ~ Z 의 5개 조합으로 이루어져 있습니다.
	// Ex) UE9G2, KLAJL, 90832

//	srand((unsigned int)time(NULL));
//	char data[6] = { 0 };
//
//	printf("사용자 확인값 : ");
//	for (int i = 0; i < 5; i++) {
//		int a = rand() % 2;
//		if (a) {
//			data[i] = rand() % 26 + 65;  // 0~9 = 48 ~ 57 / A~Z = 65 ~ 90
//		}
//		else {
//			data[i] = rand() % 10 + 48;
//		}
//	}
//	printf("%s", data);
//	puts("");
//}

	//-------------------------------------------------------



	// 1~ 9 사이의 숫자 2개를 생성해 덧셈 문제 하나를 출제하고, 정답을 맞추는 코드를 작성하세요.
	// 총 3문제가 나오고, 끝나면 정답을 알려줍니다.

	srand((unsigned int)time(NULL));


	for (int i = 1; i < 4; i++) {
		int su1 = rand() % 9 + 1;
		int su2 = rand() % 9 + 1;
		int res = su1 + su2;
		int answer;

		printf("%d + %d = : ", su1, su2); scanf_s("%d", &answer);
		while (getchar() != '\n');

		if (res == answer)
			printf("정답 ! \n");
		else
			printf("틀림 ! \n");
	}
}
// 함수(Ex for문)안에서만 쓸 변수는 함수 안에 선언하는 것이 코드가 깔끔.