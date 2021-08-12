// ch23_Quiz_function-use2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
int Input();
char InputAl();
char InputChar();
int Compare(int data1, int data2);
int Random();
int LED();

int main() {

	//// Q-1 정수를 입력받아서 반환하는 함수를 구현하세요( 1 이상의 값만 가능합니다 )
	//int data;
	//data = Input();
	//if (data)
	//	printf("입력받은 정수 : %d", data);
	//else
	//	printf("0보다 작은 수는 안됩니다..");
	
	//------------------------------------------------------

	//// Q-2 1번의 함수를 사용해서 변수 2개를 각각 초기화 합니다
	////		두개의 수를 넘겨받고, 두 수 중 큰 수를 찾아서 반환하는 함수를 구현하세요
	////		- 같은값이면 0을 반환합니다
	//int data1, data2, result;
	//data1 = Input();
	//data2 = Input();
	//result = Compare(data1,data2);
	//printf("%d와 %d 비교 : %d(수가 같다면 0을 출력)", data1, data2, result);
	
	// --------------------------------------------------------

	// Q-3 알파벳 소문자를 입력받아서 반환하는 함수를 구현하세요 (아스키코드 97 ~ 122 a ~ z)
	//		- 반환되는 값은 소문자만 가능합니다
	
	//char so;
	//so = InputAl();
	//if (so) {
	//	printf("입력받은 소문자 반환 : %c", so);
	//}
	//else
	//	printf("소문자가 아님!");

	// Q-4 문자 하나를 넘겨받아서 소문자이면 대문자로 변환해서 반환하는 함수를 구현하세요

	/*char data;
	data = InputChar();
	if (data)
		printf("입력받은 문자 변환 : %c", data);
	else
		printf("잘못 입력 받음..");*/

	// Q-5 1 ~ 6 사이의 랜덤값을 반환하는 함수를 구현하세요		
	//int random;
	//random = Random();
	//printf("반환받은 랜덤값 : %d", random);

	// Q-6  5번의 함수를 사용해서 주사위 값을 가지는 변수 2개를 각각 초기화 합니다
	// 두 주사위 값이 같을때까지의 시도 횟수를 구하는 함수를 구현하세요
	/*int data1, data2;
	int count = 0;
	
	for (int i=0; i<10000;i++){
		data1 = Random();
		Sleep(700);
		printf("첫번째 주사위 값 : %d\n", data1);
		data2 = Random();
		printf("두번째 주사위 값 : %d\n", data2);
		Sleep(700);
		count++;
		printf("------------------------------\n");
		if (data1 == data2)
			break;
	}
	printf("%d회에 주사위 값이 같아졌습니다.", count);*/
	
	// Q-7  터치 할 때마다 LED의 밝기가 변하는 코드를 작성하세요
	//		- 터치를 확인하는 값은 하나입니다
	// Ex) touch : t
	// LED : 50
	// touch : t
	// LED : 100
	// touch : t
	// LED : 0
	// touch : t
	// LED : 50
	// touch : g
	// touch : t
	// LED : 100
	// touch : e
	// - Power off-
	int light;
	int error = 0;

	light = LED();
	printf(" - Power off - \n");
}

int Input() {
	int data;
	printf("정수 입력 : "); scanf_s("%d", &data);
	while (getchar() != '\n');
	if (data > 0)
		return data;
	else
		return 0;
}

int Compare(int data1,int data2) {
	if (data1 > data2)
		return data1;
	else if (data1 < data2)
		return data2;
	else
		return 0;
}

char InputAl() {
	char so;
	printf("소문자 입력 : "); so = getchar();
	while (getchar() != '\n');
	if ((int)so > 96 && (int)so < 123) {
		return so;
	}
	else
		return 0;
}

char InputChar() {
	char data;
	printf("소문자 입력 : "); data = getchar();
	while (getchar() != '\n');
	data = data - 32;
	if (data >= 65 && data <= 90) {
		return data;
	}
	else
		return 0;
}

int Random() {
	srand((unsigned int)time(NULL));
	int random;
	random = rand() % 5 + 1;
	return random;
}

int LED() {
	char touch;
	int light = 0;
	while (1) {
		printf("touch : "); touch = getchar();
		while (getchar() != '\n');
		if (touch == 't') {
			if (light == 0)
				light = 50;
			else if (light == 50)
				light = 100;
			else
				light = 0;
			printf("LED : %d\n", light);
		}
		else if (touch == 'e')
			break;
	}
	return light;
}