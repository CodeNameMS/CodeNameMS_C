#include <stdio.h>

int main() {

	// 월을 입력받아서 해당 월이 몇일까지 있는지를 알려주는 코드를 작성하세요
	// - 2월은 '28 or 29일' 로 처리 하세요

	//int month;
	//printf("몇 월을 알고 싶으세요 ? (1~12) : "); scanf_s("%d", &month);

	//switch (month) {
	//case 1:
	//case 3:
	//case 5:
	//case 7:
	//case 8:
	//case 10:
	//case 12:
	//	printf("31일까지 있습니다.\n"); break;
	//case 2:
	//	printf("28 or 29일까지 있습니다.\n"); break;
	//case 4:
	//case 6:
	//case 9:
	//case 11:
	//	printf("30일까지 있습니다.\n"); break;
	//default :
	//	printf("???\n");
	//}


	// 버스 단말기 코드를 작성하세요
	// - 요금 : 일반(1250), 학생(720)
	// 버스카드 잔액을 설정합니다
	// 카드를 확인합니다( g : 일반, s : 학생 )
	// 확인후에 차감된 금액을 알려주세요

	//int money; char man;
	//printf("버스 카드 잔액 설정 : "); scanf_s("%d", &money); 
	//getchar();
	//printf("카드를 확인합니다(g/s) : "); man = getchar();

	//	switch (man) {
	//	case 'g':
	//	case 'G':
	//		money = money - 1250;
	//		printf("일반 : 1250원입니다.\n");
	//		if (money >= 0)
	//			printf("잔액 : %d\n", money);
	//		else
	//			printf("잔액 부족!");
	//		break;
	//	case 's':
	//	case 'S':
	//		money = money - 720;
	//		printf("학생 : 720원입니다.\n");
	//		if (money >= 0)
	//			printf("잔액 : %d\n", money);
	//		else
	//			printf("잔액 부족!");
	//		break;
	//	}

	// 간단한 계산기( + , - , * , / ) 코드를 작성하세요
	// Ex) + , - , * , / 선택 > *
	// 숫자 2개 입력 > 3 7
	// 3 * 7 = 21

	/*float su1, su2, hap=0,cha=0,dou=0,avg=0;
	char a;
	printf("숫자 두 개를 입력하세요 : "); scanf_s("%f %f", &su1, &su2); 
	getchar();
	printf("연산을 선택하세요(+,-,*,/) : "); a = getchar();

	switch (a) {
	case '+':
		hap = su1 + su2;
		printf("합은 %.1f입니다.", hap); break;
	case '-':
		cha = su1 - su2;
		printf("차는 %.1f입니다.",cha); break;
	case '*':
		dou = su1 * su2;
		printf("곱은 %.1f입니다.", dou); break;
	case '/':
		avg = su1 / su2;
		printf("나누기는 %.3f입니다.", avg); break;
	default :
		printf("?????");
	}*/
}