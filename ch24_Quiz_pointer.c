// ch24_Quiz_pointer

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	// 아래 변수의 주소를 가지는 포인터를 선언하고, 포인터를 사용해서 변수에 값을 입력하는 코드를 작성하세요
	/*char ch;
	double da;

	char* pch = &ch;
	double* pda = &da;

	printf("문자 입력 : "); *pch = getchar();
	while (getchar() != '\n');
	printf("실수 입력 : "); scanf_s("%lf", pda);

	printf("문자 : %c\n", ch);
	printf("실수 : %.2f\n", da);*/

	// 아래 배열의 위치를 가지는 포인터를 선언하고, 포인터를 사용해서 해당 배열을 1 ~ 20 사이의 랜덤값으로 초기화하고
	// 출력하는 코드를 작성하세요
	/*int data[10] = { 0 };
	int size = sizeof(data) / sizeof(data[0]);
	int* pdata = data;
	for (int i = 0; i < size; i++) {
		*(pdata + i) = rand() % 20 + 1;
		printf("%d\n", data[i]);
	}*/


	// 아래 배열의 위치를 가지는 포인터를 선언하고, 포인터를 사용해서 값을 입력 받고
	// 배열의 값을 한 문자씩 출력하는 코드를 작성하세요.
	/*char text[20];
	char* ptext = text;
	int size_text = sizeof(text) / sizeof(text[0]);

	for (int i = 0; i < size_text; i++) {
		ptext[i] = getchar();
		while (getchar() != '\n');
	}
	for (int j = 0; j < size_text; j++) {
		printf("%c", text[j]);
	}*/

}