// ch08_Quiz_if

#include <stdio.h>

int main() {
	// 5의 배수인지를 확인하는 코드를 작성하세요

	// 두 개의 숫자 중에서 큰 수를 찾는 코드를 작성하세요
	// - 두 수는 다른 수 입니다.

	// 세 개의 숫자 중에서 큰 수를 찾는 코드를 작성하세요
	// - 세 개의 수는 모두 다른 수 입니다.

	// 성별(m, f)을 사용해서, m이면 '남성', f면 '여성'으로 출력하는 코드를 작성하세요

	// 두 수의 합을 구하고, 합이 2배의 배수이면서 3의 배수도 되는지를 확인하는 코드를 작성하세요

	// 두 점 사이의 거리를 구하는 코드를 작성하세요
	// - 거리의 결과는 무조건 + 값이 나와야 합니다.
	// Ex)  첫번째 위치 : 2
	//		두번째 위치 : 7
	//		거리		: 5

	////5의 배수 확인
	//printf("정수 입력 : ");
	//int data; scanf_s("%d", &data);
	//if (data % 5 == 0)
	//	printf("5의 배수");
	//if (data % 5 != 0)
	//	printf("5의 배수 아님");

	//// 2개 숫자 중 큰 수 찾기
	//int su1, su2;
	//printf("첫번째 정수 입력 : "); scanf_s("%d", &su1);
	//printf("두번째 정수 입력 : "); scanf_s("%d", &su2);
	//if (su1 > su2)
	//	printf("%d(이)가 더 큽니다.", su1);
	//if (su1 < su2)
	//	printf("%d(이)가 더 큽니다.", su2);

	//// 3개의 수 중에서 큰 수 찾기
	//int su1, su2, su3;
	//printf("첫 번째 정수 입력 : "); scanf_s("%d", &su1);
	//printf("두 번째 정수 입력 : "); scanf_s("%d", &su2);
	//printf("세 번째 정수 입력 : "); scanf_s("%d", &su3);

	//if (su1 > su2) {
	//	if (su2 > su3)
	//		printf("첫 수 %d(이)가 가장 큽니다.", su1);
	//	if (su2 < su3) {
	//		if (su1 > su3)
	//			printf("첫 수 %d(이)가 가장 큽니다.", su1);
	//		if (su1 < su3)
	//			printf("셋째 수 %d(이)가 가장 큽니다.", su3);
	//	}
	//}
	//if (su1 < su2) {
	//	if (su1 > su3)
	//		printf("둘째 수 %d(이)가 가장 큽니다.", su2);
	//	if (su1 < su3) {
	//		if (su2 > su3)
	//			printf("둘째 수 %d(이)가 가장 큽니다.", su2);
	//		if (su2 < su3)
	//			printf("셋째 수 %d(이)가 가장 큽니다.", su3);
	//	}
	//}

	////성별로 출력
	//printf("성별을 (m/f)로 입력하세요 : ");
	//char sex = getchar();
	//if (sex == 'm')
	//	printf("남성입니다.");
	//if (sex == 'f')
	//	printf("여성입니다.");

	//// 2개 수 합구하기, 합이 2배수이면서 3의배수 인지 확인

	//int su1, su2, hap;
	//printf("첫번째 수를 입력 : "); scanf_s("%d", &su1);
	//printf("두번째 수를 입력 : "); scanf_s("%d", &su2);
	//hap = su1 + su2;
	//printf("두 수의 합은 : %d입니다.\n", hap);

	//if ((hap % 2 == 0) && (hap % 3 == 0))
	//	printf("두 수의 합은 2의 배수이며 3의 배수입니다.");
	//else
	//	printf("두 수의 합은 2의 배수이며 3의 배수가 아닙니다.");

	//// 두 점 사이의 거리를 구하는 코드 작성

	//int data1, data2, space=0;
	//printf("첫번째 점의 위치를 정하세요 : "); scanf_s("%d", &data1);
	//printf("두번째 점의 위치를 정하세요 : "); scanf_s("%d", &data2);
	//if (data1 > data2)
	//	space = data1 - data2;
	//if (data1 < data2)
	//	space = data2 - data1;
	//printf("두 점 사이의 거리는 %d입니다.\n", space);
}