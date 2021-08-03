#include <stdio.h>
/*
배열
- 한번의 선언으로 같은 타입의 데이터 공간을 메모리에 연속적으로 생성합니다.

배열 선언(생성)
- 자료형 배열명[ 크기(갯수) ];

배열의 요소 사용
- 배열명 [ index ]
	> index 번호는 무조건 0부터 시작합니다. ( 임의설정 X )

*/
//int main() {
//
//	// 배열 선언
//	int ar_1[3];				//ar_1		12byte
//								//	 | ? | ? | ? |
//								//	  [0] [1] [2]
//	ar_1[0] = 10;
//	ar_1[1] = 20;
//	ar_1[2] = 30;
//	// ar_1[3] = 40; Error
//
//	printf("ar_1[%d] : %d\n", 0, ar_1[0]);
//	printf("ar_1[%d] : %d\n", 1, ar_1[1]);
//	printf("ar_1[%d] : %d\n", 2, ar_1[2]);
//
//	int ar_2[3] = { 1, 2, 3 };			// ar_2  [0]    [1]    [2]
//										//      | 1 |  | 2 |  | 3 |
//
//	// ar_2 = { 4, 5, 6 }; Error
//	// 배열 전체 요소 or 여러개의 요소에 한번에 접근할 수 있는 건 배열 생성과 동시에 최초 한번만 가능합니다.
//
//	int ar_3[] = { 3,4,7,6 };			// ar_3  [0]	[1]    [2]	  [3]
//										//      | 3 |  | 4 |  | 7 |  | 6 |
//	//배열 선언과 동시에 저장하려는 값을 지정하면,
//	// 배열의 크기를 지정하지 않아도 저장하려는 데이터 수 만큼 자동으로 생성합니다.
//
//	int ar_4[3] = { 1 };				// ar_4  [0]	[1]    [2]	  
//										//      | 1 |  | 0 |  | 0 | 
//	// 배열 선언과 동시에 한 개의 요소라도 초기화하면, 나머지 뒤에 요소는 자동 0으로 초기화 됩니다.
//
//	int size = 3;
//	// int ar_5[size]; Error
//	// 배열을 생성 할 때 사용하는 크기값은 상수만 가능합니다.
//
//	int ar_5[3] = { 0 };
//	ar_5[0] = 11;
//	ar_5[1] = 22;
//
//	int idx = 2;
//	ar_5[idx] = 33;
//	printf("ar_5[%d] : %d\n", 0, ar_5[0]);
//	printf("ar_5[%d] : %d\n", 1, ar_5[1]);
//	printf("ar_5[%d] : %d\n", idx, ar_5[idx]);
//	puts("");
//
//	printf("ar_5 주소 :%p\n", ar_5);
//	// 배열명이 가지고 있는 값은 해당 배열의 메모리 시작 주소입니다. ( 주소 상수 )
//
//	// 배열의 전체 요소 사용
//	for (int i = 0; i < 3; i++) {
//		printf("ar_5[%d] : %d\n", i, ar_5[i]);
//	}
//	puts("");
//
//	// 요소의 수 = 배열 전체 크기 / 하나의 요소 크기
//	int ar_5Length = sizeof(ar_5) / sizeof(ar_5[0]);
//	printf("ar_5Length : %d\n", ar_5Length);
//
//	for (int i = 0; i < ar_5Length; i++) {
//		printf("ar_5[%d] : %d\n", i, ar_5[i]);
//	}
//}

// ----------------------------------------------

/*
배열 요소의 합
*/

//int main() {
//
//	int ar7[] = { 4,2,9,3,1,7 };
//	int ar7_length = sizeof(ar7) / sizeof(int);
//
//	int tot = 0;
//	for (int i = 0; i < ar7_length; i++) {
//		printf("%4d", ar7[i]);
//		tot += ar7[i];
//	}
//	printf("\n합 : %d\n", tot);
//}

// -----------------------------------------------

//int main() {
//
//	int ar8[] = { 3,1,8,4,6,2 };
//	int ar8_length = sizeof(ar8) / sizeof(int);
//
//	int count = 0;
//	for (int i = 0; i < ar8_length; i++) {
//		printf("%4d", ar8[i]);
//		if (ar8[i] >= 3 && ar8[i] <= 7)
//			++count;
//	}
//	printf("\n3 ~ 7 사이의 데이터 수 : %d\n", count);
//	puts("");
//
//	int start = 3;
//	int end = 7;
//	count = 0;
//	for (int i = 0; i < ar8_length; i++) {
//		printf("%4d", ar8[i]);
//		if (ar8[i] >= start && ar8[i] <= end)
//			count;
//	}
//	printf("\n%d ~ %d 사이의 데이터 수 : %d\n", start, end, count);
//	puts("");
//}

// ------------------------------------------------------------------

/*
배열 안에서 가장 큰 수 찾기
*/
//
//int main() {
//
//	int ar9[] = { 5,2,7,11,9,4,10 };
//	int ar9_length = sizeof(ar9) / sizeof(int);
//
//	printf("ar9 : ");
//	for (int i = 0; i < ar9_length; i++) {
//		printf("%4d", ar9[i]);
//	}
//	puts("");
//
//	int max = ar9[0];
//	int maxIdx = 0;
//	for (int i = 1; i < ar9_length; i++) {
//		if (ar9[i] > max)
//			max = ar9[i];
//		if (ar9[i] > ar9[maxIdx])
//			maxIdx = i;
//	}
//	printf("큰 값 : %d\n", max);
//	printf("큰 값 : %d\n - 위치 : %d\n", ar9[maxIdx], maxIdx);
//
//
//
//}