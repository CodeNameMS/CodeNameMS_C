#include <stdio.h>

//int main() {
//
//	// 태어난 년도를 입력받아서 나이를 구하세요
//	// - 나이를 사용해서 성인과 미성년자 구분, 성인이면 청년층(20~39), 중장년층(40이상)으로 분류
//	//	 미성년자이면 청소년(14~19), 어린이(13이하)로 분류하는 코드를 작성하세요
//	int year, age = 0;
//	printf("태어난 년도 입력 : "); scanf_s("%d", &year);
//	age = 2021 - year;
//	if (age > 19) {
//		printf("성인입니다.\n");
//		if (age <= 39) {
//			printf("%d살 청년층입니다.\n", age);
//		}
//		else {
//			printf("%d살 중장년층입니다.\n", age);
//		}
//	}
//	else {
//		printf("미성년자입니다.\n");
//		if (age >= 14) {
//			printf("%d살 청소년입니다.\n", age);
//		}
//		else {
//			printf("%d살 어린이입니다.\n", age);
//		}
//	}
//
//}

	// 보유한 금액에 따라서 구매가능한 아이템 목록을 보여주는 코드를 작성
	// - 3000 미만
	//	 > 목검 - 일반물약 - 나무방패
	// - 3000 이상
	//   > 광선검 - 에너지 드링크 - 방어막
	// - 3000 이상이면 모든 아이템 목록이 보여야 합니다.

//int main() {
//
//	int money;
//	printf("소지한 금액 입력 : "); scanf_s("%d", &money);
//  printf("보유한 금액 : %d원", money);
//	if (money < 3000) {
//		printf("구매 가능한 아이템 :\n");
//		printf("목검\n");
//		printf("일반물약\n");
//		printf("나무방패\n");
//	}
//	else {
//		printf("구매 가능한 아이템 :\n");
//		printf("목검\n");
//		printf("일반물약\n");
//		printf("나무방패\n");
//		printf("광선검\n");
//		printf("에너지드링크\n");
//		printf("방어막\n");
//	}
//}


	// 물품의 크기와 무게에 따라서 사용하는 cart를 알려주는 코드를 작성
	// - 크기      무게          cart
	//   S         50kg 미만     cart-A
	//   S         50kg 이상     cart-B
	//   L         50kg 미만     cart-C
	//   L         50kg 이상     cart-D
//int main() {
//	char size;
//	int kg;
// 
//	printf("물품의 크기를 입력하세요 (S/L) : "); size=getchar();
//	if ((size == 'S') || (size == 'L')) {
//		printf("물품의 무게를 입력하세요 : "); scanf_s("%d", &kg);
// 
//		if (size == 'S') {
//			if (kg < 50) {
//				printf("cart-A를 사용하십시오.\n");
//			}
//			else {
//				printf("cart-B를 사용하십시오.\n");
//			}
//		}
//		else {
//			if (kg < 50) {
//				printf("cart-C를 사용하십시오.\n");
//			}
//			else {
//				printf("cart-D를 사용하십시오.\n");
//			}
//		}
//	}
//	else {
//		printf("S / L 중 입력하세요.");
//	}
//}