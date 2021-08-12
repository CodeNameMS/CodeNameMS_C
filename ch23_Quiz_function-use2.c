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

	//// Q-1 ������ �Է¹޾Ƽ� ��ȯ�ϴ� �Լ��� �����ϼ���( 1 �̻��� ���� �����մϴ� )
	//int data;
	//data = Input();
	//if (data)
	//	printf("�Է¹��� ���� : %d", data);
	//else
	//	printf("0���� ���� ���� �ȵ˴ϴ�..");
	
	//------------------------------------------------------

	//// Q-2 1���� �Լ��� ����ؼ� ���� 2���� ���� �ʱ�ȭ �մϴ�
	////		�ΰ��� ���� �Ѱܹް�, �� �� �� ū ���� ã�Ƽ� ��ȯ�ϴ� �Լ��� �����ϼ���
	////		- �������̸� 0�� ��ȯ�մϴ�
	//int data1, data2, result;
	//data1 = Input();
	//data2 = Input();
	//result = Compare(data1,data2);
	//printf("%d�� %d �� : %d(���� ���ٸ� 0�� ���)", data1, data2, result);
	
	// --------------------------------------------------------

	// Q-3 ���ĺ� �ҹ��ڸ� �Է¹޾Ƽ� ��ȯ�ϴ� �Լ��� �����ϼ��� (�ƽ�Ű�ڵ� 97 ~ 122 a ~ z)
	//		- ��ȯ�Ǵ� ���� �ҹ��ڸ� �����մϴ�
	
	//char so;
	//so = InputAl();
	//if (so) {
	//	printf("�Է¹��� �ҹ��� ��ȯ : %c", so);
	//}
	//else
	//	printf("�ҹ��ڰ� �ƴ�!");

	// Q-4 ���� �ϳ��� �Ѱܹ޾Ƽ� �ҹ����̸� �빮�ڷ� ��ȯ�ؼ� ��ȯ�ϴ� �Լ��� �����ϼ���

	/*char data;
	data = InputChar();
	if (data)
		printf("�Է¹��� ���� ��ȯ : %c", data);
	else
		printf("�߸� �Է� ����..");*/

	// Q-5 1 ~ 6 ������ �������� ��ȯ�ϴ� �Լ��� �����ϼ���		
	//int random;
	//random = Random();
	//printf("��ȯ���� ������ : %d", random);

	// Q-6  5���� �Լ��� ����ؼ� �ֻ��� ���� ������ ���� 2���� ���� �ʱ�ȭ �մϴ�
	// �� �ֻ��� ���� ������������ �õ� Ƚ���� ���ϴ� �Լ��� �����ϼ���
	/*int data1, data2;
	int count = 0;
	
	for (int i=0; i<10000;i++){
		data1 = Random();
		Sleep(700);
		printf("ù��° �ֻ��� �� : %d\n", data1);
		data2 = Random();
		printf("�ι�° �ֻ��� �� : %d\n", data2);
		Sleep(700);
		count++;
		printf("------------------------------\n");
		if (data1 == data2)
			break;
	}
	printf("%dȸ�� �ֻ��� ���� ���������ϴ�.", count);*/
	
	// Q-7  ��ġ �� ������ LED�� ��Ⱑ ���ϴ� �ڵ带 �ۼ��ϼ���
	//		- ��ġ�� Ȯ���ϴ� ���� �ϳ��Դϴ�
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
	printf("���� �Է� : "); scanf_s("%d", &data);
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
	printf("�ҹ��� �Է� : "); so = getchar();
	while (getchar() != '\n');
	if ((int)so > 96 && (int)so < 123) {
		return so;
	}
	else
		return 0;
}

char InputChar() {
	char data;
	printf("�ҹ��� �Է� : "); data = getchar();
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