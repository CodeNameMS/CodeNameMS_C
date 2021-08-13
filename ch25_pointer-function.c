// ch25_pointer-function.c

#include <stdio.h>

// �Լ� ����θ� �����ϸ� �� �Լ����� �Լ��� ȣ���� �� ������ ���� �ʴٸ� ����� �� ����.
//void ValueFunc(int a, int b) {
//	a += 100;
//	b += 100;
//}
//
//void ReferenceFunc(int* p1, int* p2) {
//	*p1 += 100;
//	*p2 += 100;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 20;
//
//	ValueFunc(a, b);
//	printf("a :%d - b : %d\n", a, b);
//
//	ReferenceFunc(&a, &b);
//	printf("a : %d - b : %d\n", a, b);
//
//}

// ----------------------------------------------------

//void ShowData(int a, int b) {
//	printf("%d - %d\n", a, b);
//}
//
//void SwapData(int* p1, int* p2) {
//	int tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}
//
//int main() {
//
//	int na = 5;
//	int nb = 7;
//
//	ShowData(na, nb);
//
//	SwapData(&na, &nb);
//	ShowData(na, nb);
//
//}

// --------------------------------------------

//void InputString(char* stn, int size) {
//	printf("�ܾ� �Է� > ");
//	scanf_s("%s", stn, size);
//}
//
//void AlterText(char* stn) {
//	stn[0] -= 32;
//}
//
//int main() {
//
//	char word[20];
//	InputString(word, sizeof(word));
//	printf("word : %s\n", word);
//	puts("");
//
//	char text[] = "google";
//	AlterText(text);
//	printf("text : %s\n", text);
//}

// ---------------------------------------------

//int InputInt(const char* message) {
//	//message[0] = 'A';
//	int value;
//	printf(message); scanf_s("%d", &value);
//	return value;
//}
//
//int main() {
//
//	int ia = InputInt("������ �Է� > ");
//
//	int ib = InputInt("���� �Է� > ");
//}

// ---------------------------------------------------

//int Input() {
//
//	int a;
//	printf("���� �Է� > "); scanf_s("%d", &a);
//
//}

void ShowArray(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("%4d", arr[i]);
	}
	puts("");
}

void InputArray(int* arr, int length) {
	for (int i = 0; i < length; i++) {
		printf("[%d] �Է� > ", i);
		scanf_s("%d", &arr + i);//scanf_s("%d", &arr[i]);
	}
}

int main() {

	int arr[] = { 11, 22, 33 };
	int arr_length = sizeof(arr) / sizeof(int);

	ShowArray(arr, arr_length);
	InputArray(arr, arr_length);

}