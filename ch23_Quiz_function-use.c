// ch23_Quiz_function-use

// ch23-Quiz_function.c

//#include <stdio.h>
//int Input();
//int Output(money, balance);
//
//int main() {
//
//	// ATM �� �ڵ带 �ۼ��ϼ���
//	// - ���� ���� �ܾ��� �����մϴ�
//	// ����ϴ� �ݾ��� �Է¹޽��ϴ�
//	// ����� �����ϸ� ��� �� ���� �ܾ��� �˷��ּ���
//	// > ��� ���� : ���� �ݾ��� 10000 �� ������ �����մϴ� ( 1001 , 11000 X )
//	// ���� �ݾ��� �ܾ׺��� ���� �� �����ϴ�
//	int balance = 100000;
//	int money;
//	printf("�ܾ� : %d ��\n", balance);
//	money = Input();
//	Output(money,balance);
//}
//
//
//
//int Input() {
//	int money;
//	printf("���� �ݾ� �Է� > "); scanf_s("%d", &money);
//	puts("");
//	return money;
//}
//
//
//int Output(money,balance) {
//	// balance -= money; Error
//	if (money % 10000 == 0 && money <= balance && money > 0) {
//		balance -= money;
//		printf("%d �� ��� ����!\n", money);
//		printf("��� �� �ܾ� : %d ��\n", balance);
//	}
//	else {
//		puts("���� �ݾ� ����~");
//	}
//	printf("�ܾ� : %d ��\n", balance);
//}



//	//---------------------------------------------------------------------
//
//int main() {
//
//	// ������ ���� ��ŭ�� '*'�� ����ϴ� �ڵ带 �ۼ��ϼ���
//	// Ex) Ƚ�� : 5
//	// *****
//	int star;
//	printf("Ƚ�� �Է� > "); scanf_s("%d", &star);
//	puts("");
//
//	for (int i = 0; i < star; i++) {
//		putchar('*');
//	}
//	puts("");
//}
//
//
//
//	//------------------------------------------------------------------------
//int main(){
//	// ���� 3���� �Է��ް�, �Է¹��� ������ ���� ���ϴ� �ڵ带 �ۼ��ϼ���
//	// ���ϴ� ���� +(plus)�� �����ϰ�, �Է� ���� ��� ����Ǿ� ���� �ʾƵ� �˴ϴ�
//	int data = 0; // �Է� ��
//	int tot = 0; // ��
//	int count = 1; // �Է� ó�� Ƚ��
//
//	while (count <= 3) {
//		printf("%d ��° �Է� > ", count); scanf_s("%d", &data);
//		while (getchar() != '\n');
//		if (data >= 0) {
//			tot += data;
//			++count;
//		}
//	}
//	printf("�� : %d\n", tot);
//}

