// ch16-Quiz_array.c

#include <stdio.h>

//int main() {
//
//	// ���� 5���� ���� �迭�� �����ϰ� ���� �Է��ϼ���
//	// - �迭�ȿ��� ¦���� ��, ����, ���� ���ϼ���
//	// - ���� �������� ��ġ, ���� ���ϼ���
//	// - ��ü ����� ���ϰ�, ��պ��� ���� �������� ������ �����ϼ���
//
//	int arr1[5] = { 1,2,3,4,5 };
//
//	int arr1_length = sizeof(arr1) / sizeof(int);
//	int jjak;
//	printf("¦���� �� : ");
//	for (int i = 0; i < arr1_length; i++) {
//		if (arr1[i] % 2 == 0 && arr1[i] != 1) {
//			jjak = arr1[i];
//			printf("%d ", jjak);
//		}
//	}
//	int count=0;
//	for (int i = 0; i < arr1_length; i++) {
//		if (arr1[i] % 2 == 0 && arr1[i] != 1) {
//			++count;
//		}
//	}
//	printf("\n¦���� ���� : %d ��\n", count);
//
//	int hap = 0;
//	for (int i = 0; i < arr1_length; i++) {
//		if (arr1[i] % 2 == 0 && arr1[i] != 1) {
//			hap += arr1[i];
//		}
//	}
//	printf("¦���� �� : %d\n", hap);
//
//	int min = arr1[0];
//	int minidx = 0;
//	for (int i = 1; i < arr1_length; i++) {
//		if (arr1[i] < min)
//			min = arr1[i];
//		if (arr1[i] < arr1[minidx])
//			minidx = i;
//	}
//	printf("���� ���� �� : %d \n", min);
//	printf("���� ���� ���� ��ġ : arr1[%d]\n", minidx);
//
//	int avg = 0;
//	int hap2 = 0;
//	int i = 0;
//	for (i = 0; i < arr1_length; i++) {
//		hap2 += arr1[i];
//	}
//	avg = hap2 / i;
//	printf("��� : %d\n", avg);
//
//	printf("��պ��� ���� �� : ");
//	for (int i = 0; i < arr1_length; i++) {
//		if (avg < arr1[i])
//			printf("%d ", arr1[i]);
//	}

//-----------------------------------------------

//	// base �迭�� ��Ҹ� 1���� 1�� ������Ű�鼭 ������� �ʱ�ȭ�ϴ� �ڵ带 �ۼ��ϼ���
//	// ���� �ϳ��� �Է¹ް�, base �迭�� �� ����� ���� �Է¹��� ����ŭ ������Ű�� �ڵ带 �ۼ��ϼ���
//	// > 1 2 3 4 5
//	//	������ : 2
//	// > 3 4 5 6 7
	
int main(){

	int base[5] = { 0 };
	int base_length = sizeof(base) / sizeof(int);
	int su1;
	
	printf("���� �� �迭�� : ");
	for (int i = 0; i < base_length; i++) {
		printf("%d ", base[i]);
	}
	puts("");

	printf("1�� ������ �� : ");
	for (int i = 0; i < base_length; i++) {
		base[i] = i;
		printf("%d ", base[i]);
	}
	puts("");

	printf("������ �Է� : "); scanf_s("%d", &su1);
	printf("%d�� ������ �� : ", su1);
	for (int i = 0; i < base_length; i++) {
		base[i] += su1;
		printf("%d ", base[i]);
	}
	puts("");

	int reverse[5] = { 0 };
	// base �迭�� ���� �� �迭�� �Ųٷ� �����ϴ� �ڵ带 �ۼ��ϼ���.
	int j = base_length -1;
	printf("������ : ");
	for (int i = 0; i < base_length; i++) {
		reverse[j - i] = base[i];
	}
	for (int i = 0; i < base_length; i++) {
		printf("%d ", reverse[i]);
	}
	puts("");

}