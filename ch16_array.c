#include <stdio.h>
/*
�迭
- �ѹ��� �������� ���� Ÿ���� ������ ������ �޸𸮿� ���������� �����մϴ�.

�迭 ����(����)
- �ڷ��� �迭��[ ũ��(����) ];

�迭�� ��� ���
- �迭�� [ index ]
	> index ��ȣ�� ������ 0���� �����մϴ�. ( ���Ǽ��� X )

*/
//int main() {
//
//	// �迭 ����
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
//	// �迭 ��ü ��� or �������� ��ҿ� �ѹ��� ������ �� �ִ� �� �迭 ������ ���ÿ� ���� �ѹ��� �����մϴ�.
//
//	int ar_3[] = { 3,4,7,6 };			// ar_3  [0]	[1]    [2]	  [3]
//										//      | 3 |  | 4 |  | 7 |  | 6 |
//	//�迭 ����� ���ÿ� �����Ϸ��� ���� �����ϸ�,
//	// �迭�� ũ�⸦ �������� �ʾƵ� �����Ϸ��� ������ �� ��ŭ �ڵ����� �����մϴ�.
//
//	int ar_4[3] = { 1 };				// ar_4  [0]	[1]    [2]	  
//										//      | 1 |  | 0 |  | 0 | 
//	// �迭 ����� ���ÿ� �� ���� ��Ҷ� �ʱ�ȭ�ϸ�, ������ �ڿ� ��Ҵ� �ڵ� 0���� �ʱ�ȭ �˴ϴ�.
//
//	int size = 3;
//	// int ar_5[size]; Error
//	// �迭�� ���� �� �� ����ϴ� ũ�Ⱚ�� ����� �����մϴ�.
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
//	printf("ar_5 �ּ� :%p\n", ar_5);
//	// �迭���� ������ �ִ� ���� �ش� �迭�� �޸� ���� �ּ��Դϴ�. ( �ּ� ��� )
//
//	// �迭�� ��ü ��� ���
//	for (int i = 0; i < 3; i++) {
//		printf("ar_5[%d] : %d\n", i, ar_5[i]);
//	}
//	puts("");
//
//	// ����� �� = �迭 ��ü ũ�� / �ϳ��� ��� ũ��
//	int ar_5Length = sizeof(ar_5) / sizeof(ar_5[0]);
//	printf("ar_5Length : %d\n", ar_5Length);
//
//	for (int i = 0; i < ar_5Length; i++) {
//		printf("ar_5[%d] : %d\n", i, ar_5[i]);
//	}
//}

// ----------------------------------------------

/*
�迭 ����� ��
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
//	printf("\n�� : %d\n", tot);
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
//	printf("\n3 ~ 7 ������ ������ �� : %d\n", count);
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
//	printf("\n%d ~ %d ������ ������ �� : %d\n", start, end, count);
//	puts("");
//}

// ------------------------------------------------------------------

/*
�迭 �ȿ��� ���� ū �� ã��
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
//	printf("ū �� : %d\n", max);
//	printf("ū �� : %d\n - ��ġ : %d\n", ar9[maxIdx], maxIdx);
//
//
//
//}