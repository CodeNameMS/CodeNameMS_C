// ch15_Quiz-star

#include <stdio.h>
#include <Windows.h> // Sleep()�� �������� �������.

//int main() {
//
//	while (1) {
//
//		for (int star = 0; star < 10; star++) {
//			putchar('*');
//		}
//		printf("\r");
//		Sleep(1000);
//
//		for (int star =0; star < 10; star++){
//			putchar(' ');
//		}
//		printf("\r");
//		Sleep(1000); // 1000���� 1�� ������ ����
//	}
//
//}

// Quiz - star2

//int main() {
//
//	while (1) {
//
//		for (int star = 0; star < 10; star++) {
//			putchar('*');
//			Sleep(100);
//		}
//		Sleep(1000);
//		printf("\r");
//
//		for (int star =0; star < 10; star++){
//			putchar(' ');
//		}
//		printf("\r");
//		Sleep(300);
//	}
//}

// Quiz - star3

//int main() {
//
//	while (1) {
//
//		for (int star = 0; star < 10; star++) {
//			putchar('*');
//			Sleep(50);
//		}
//		Sleep(50);
//		printf("\r");
//
//		for (int star =0; star < 10; star++){
//			putchar(' ');
//			Sleep(50);
//		}
//		printf("\r");
//		Sleep(50);
//	}
//}

// Quiz - star4

//int main() {
//
//	while (1) {
//
//		for (int star = 0; star < 10; star++) {
//			putchar('*');
//			putchar(' ');
//		}
//		printf("\r");
//		Sleep(1000);
//
//		for (int star = 0; star < 10; star++) {
//			putchar(' ');
//			putchar('*');
//		}
//		Sleep(1000);
//		printf("\r");
//	}
//}

// Quiz - machine

//int main() {
//
//	int money, money_back, re=0;
//	int cok = 1000, coffee = 300;
//	char choice;
//
//	printf("-------------------------------\n");
//	printf("1.�ݶ�(1000)\t2.Ŀ��(300)\t\n");
//	printf("-------------------------------\n");
//	printf("���� �־��ּ��� : "); scanf_s("%d", &money);
//
//	do {
//		while (getchar() != '\n');
//		printf("1.�ݶ�(1000)\t2.Ŀ��(300) ���� > "); choice = getchar();
//		if (choice == '1') {
//			money_back = money - cok;
//			if (money_back > 0) {
//				printf("�ݶ� ���ɴϴ�~\n");
//				printf("���� �ܾ� : %d\n", money_back);
//			}
//			else
//				printf("�ܾ� ����! �����մϴ�.\n");
//		}
//		else if (choice == '2') {
//			money_back = money - coffee;
//			if (money_back > 0) {
//				printf("Ŀ�ǰ� ���ɴϴ�~\n");
//				printf("���� �ܾ� : %d\n", money_back);
//			}
//			else
//				printf("�ܾ� ����! �����մϴ�.\n");
//		}
//		else {
//			money_back = money;
//			printf("���� ��ǰ�̿���..\n");
//			printf("���� �ܾ� : %d\n", money_back);
//		}
//		if (money_back >= 300) {
//			printf("�籸�� �Ͻðھ��? (0.no 1. yes) > "); scanf_s("%d", &re);
//		}
//		else {
//			printf("�Ž��� �� : %d\n", money);
//			break;
//		}
//		money = money_back;
//	} while (re != '0');
//}