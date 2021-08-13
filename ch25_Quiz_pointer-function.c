// ch25_Quiz_pointer-function.c

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define VALUE_LENGTH 3

void InputText(char* text, int size) {
	printf("값을 입력하세요 : ");
	scanf_s("%s", text, size);
}

void AlterText(char* text, int length) {

	for (int i = 0; i < length; i++) {
		if (text[i] >= 90 && text[i] <= 122) {
			text[i] -= 32;
		}
	}
}

void Random(int value[]) {

	for (int i = 0; i < VALUE_LENGTH; i++) {
		value[i] = rand() % 5 + 1;
		printf("%2d", value[i]);
	}
	puts("");
}

int CompareCheck(int value[]) {
	int p = value[0];
	for (int i = 1; i < VALUE_LENGTH; i++) {
		if (p != value[i])
			return 0;
	}
	return 1;
}

int main() {

	//// 아래의 배열에 값을 입력하는 함수를 구현하세요
	//// 아래의 배열안에 값 중에서 소문자는 대문자로 변환하는 함수를 구현하세요.
	//char text[50] = { 0 };
	//int length = sizeof(text) / sizeof(text[0]);
	//InputText(text, sizeof(text));
	//printf("입력 받은 값 : %s\n", text);
	//
	//AlterText(text, length);
	//printf("소 -> 대문자 변환 : %s\n", text);



	// 아래의 배열의 1 ~ 5 사이의 랜덤값으로 초기화하는 함수를 구현하세요
	// 위의 함수를 사용해서 배열안에 한번에 모두 같은 값이 들어갈때까지 진행하는 함수를 구현하세요
	int value[VALUE_LENGTH] = { 0 };
	int count = 0;

	srand((unsigned)time(NULL));

	while (1) {
		count++;
		Random(value);
		if (CompareCheck(value))
			break;
	}
	printf("%d회", count);
}