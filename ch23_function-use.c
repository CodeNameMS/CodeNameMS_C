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
//	printf("���� �Է� > "); scanf_s("%d", &a);
//	printf("a : %d\n", a);
//	puts("");
//
//	int b = InputInteger();
//	printf("b : %d\n", b);
//
//	int sum = LastTotal(b);
//	printf("1~%d������ �� : %d\n", b, sum);
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
//	printf("���� �Է� > "); scanf_s("%d", &value);
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
//		puts("�����ϼ���~ ^^");
//	else
//		puts("�ٽ� �����ϼ���..");
//}
//
//int ShowSubject(char subject) {
//  int res = True;
//	switch (subject) {
//	case 'C':
//		puts("C�� �����ϼ̽��ϴ�..");
//		//break;
//		return 1;
//		return True;
//	case 'J':
//		puts("Java�� �����ϼ̽��ϴ�..");
//		//break;
//		return 1; // ��ȯ ���� ������ ��� ����(���ϰ��� ���� ���), ��� �Լ� ���� �� ���ϰ��� ��ȯ��.
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
//	printf("C��� : C, Java : J ���� > "); subject = getchar();
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

// �Լ��� ������ ȣ���� ������� ���������, ����� �������� �����.