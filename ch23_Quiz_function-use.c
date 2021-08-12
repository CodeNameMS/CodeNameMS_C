// ch23_Quiz_function-use

// ch23-Quiz_function.c

//#include <stdio.h>
//int Input();
//int Output(money, balance);
//
//int main() {
//
//	// ATM 기 코드를 작성하세요
//	// - 현재 통장 잔액을 설정합니다
//	// 출금하는 금액을 입력받습니다
//	// 출금이 가능하면 출금 후 남은 잔액을 알려주세요
//	// > 출금 조건 : 인출 금액은 10000 원 단위만 가능합니다 ( 1001 , 11000 X )
//	// 인출 금액은 잔액보다 많을 수 없습니다
//	int balance = 100000;
//	int money;
//	printf("잔액 : %d 원\n", balance);
//	money = Input();
//	Output(money,balance);
//}
//
//
//
//int Input() {
//	int money;
//	printf("인출 금액 입력 > "); scanf_s("%d", &money);
//	puts("");
//	return money;
//}
//
//
//int Output(money,balance) {
//	// balance -= money; Error
//	if (money % 10000 == 0 && money <= balance && money > 0) {
//		balance -= money;
//		printf("%d 원 출금 성공!\n", money);
//		printf("출금 후 잔액 : %d 원\n", balance);
//	}
//	else {
//		puts("인출 금액 오류~");
//	}
//	printf("잔액 : %d 원\n", balance);
//}



//	//---------------------------------------------------------------------
//
//int main() {
//
//	// 지정한 숫자 만큼의 '*'을 출력하는 코드를 작성하세요
//	// Ex) 횟수 : 5
//	// *****
//	int star;
//	printf("횟수 입력 > "); scanf_s("%d", &star);
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
//	// 숫자 3개를 입려받고, 입력받은 수들의 합을 구하는 코드를 작성하세요
//	// 더하는 값은 +(plus)만 가능하고, 입력 값은 모두 저장되어 있지 않아도 됩니다
//	int data = 0; // 입력 값
//	int tot = 0; // 합
//	int count = 1; // 입력 처리 횟수
//
//	while (count <= 3) {
//		printf("%d 번째 입력 > ", count); scanf_s("%d", &data);
//		while (getchar() != '\n');
//		if (data >= 0) {
//			tot += data;
//			++count;
//		}
//	}
//	printf("합 : %d\n", tot);
//}

