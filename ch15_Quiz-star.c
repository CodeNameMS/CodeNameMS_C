// ch15_Quiz-star

#include <stdio.h>
#include <Windows.h> // Sleep()을 쓰기위한 헤더파일.

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
//		Sleep(1000); // 1000분의 1초 단위로 지연
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
//	printf("1.콜라(1000)\t2.커피(300)\t\n");
//	printf("-------------------------------\n");
//	printf("돈을 넣어주세요 : "); scanf_s("%d", &money);
//
//	do {
//		while (getchar() != '\n');
//		printf("1.콜라(1000)\t2.커피(300) 선택 > "); choice = getchar();
//		if (choice == '1') {
//			money_back = money - cok;
//			if (money_back > 0) {
//				printf("콜라가 나옵니다~\n");
//				printf("현재 잔액 : %d\n", money_back);
//			}
//			else
//				printf("잔액 부족! 종료합니다.\n");
//		}
//		else if (choice == '2') {
//			money_back = money - coffee;
//			if (money_back > 0) {
//				printf("커피가 나옵니다~\n");
//				printf("현재 잔액 : %d\n", money_back);
//			}
//			else
//				printf("잔액 부족! 종료합니다.\n");
//		}
//		else {
//			money_back = money;
//			printf("없는 제품이에요..\n");
//			printf("현재 잔액 : %d\n", money_back);
//		}
//		if (money_back >= 300) {
//			printf("재구매 하시겠어요? (0.no 1. yes) > "); scanf_s("%d", &re);
//		}
//		else {
//			printf("거스름 돈 : %d\n", money);
//			break;
//		}
//		money = money_back;
//	} while (re != '0');
//}