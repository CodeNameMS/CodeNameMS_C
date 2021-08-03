// ch16-Quiz_array.c

#include <stdio.h>

//int main() {
//
//	// 정수 5개가 들어가는 배열을 선언하고 값을 입력하세요
//	// - 배열안에서 짝수의 값, 갯수, 합을 구하세요
//	// - 가장 작은값의 위치, 값을 구하세요
//	// - 전체 평균을 구하고, 평균보다 높은 데이터의 갯수를 구하하세요
//
//	int arr1[5] = { 1,2,3,4,5 };
//
//	int arr1_length = sizeof(arr1) / sizeof(int);
//	int jjak;
//	printf("짝수의 값 : ");
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
//	printf("\n짝수의 갯수 : %d 개\n", count);
//
//	int hap = 0;
//	for (int i = 0; i < arr1_length; i++) {
//		if (arr1[i] % 2 == 0 && arr1[i] != 1) {
//			hap += arr1[i];
//		}
//	}
//	printf("짝수의 합 : %d\n", hap);
//
//	int min = arr1[0];
//	int minidx = 0;
//	for (int i = 1; i < arr1_length; i++) {
//		if (arr1[i] < min)
//			min = arr1[i];
//		if (arr1[i] < arr1[minidx])
//			minidx = i;
//	}
//	printf("가장 작은 수 : %d \n", min);
//	printf("가장 작은 수의 위치 : arr1[%d]\n", minidx);
//
//	int avg = 0;
//	int hap2 = 0;
//	int i = 0;
//	for (i = 0; i < arr1_length; i++) {
//		hap2 += arr1[i];
//	}
//	avg = hap2 / i;
//	printf("평균 : %d\n", avg);
//
//	printf("평균보다 높은 수 : ");
//	for (int i = 0; i < arr1_length; i++) {
//		if (avg < arr1[i])
//			printf("%d ", arr1[i]);
//	}

//-----------------------------------------------

//	// base 배열을 요소를 1부터 1씩 증가시키면서 순서대로 초기화하는 코드를 작성하세요
//	// 숫자 하나를 입력받고, base 배열의 각 요소의 값을 입력받은 수만큼 증가시키는 코드를 작성하세요
//	// > 1 2 3 4 5
//	//	증가값 : 2
//	// > 3 4 5 6 7
	
int main(){

	int base[5] = { 0 };
	int base_length = sizeof(base) / sizeof(int);
	int su1;
	
	printf("증가 전 배열값 : ");
	for (int i = 0; i < base_length; i++) {
		printf("%d ", base[i]);
	}
	puts("");

	printf("1씩 증가된 수 : ");
	for (int i = 0; i < base_length; i++) {
		base[i] = i;
		printf("%d ", base[i]);
	}
	puts("");

	printf("증가값 입력 : "); scanf_s("%d", &su1);
	printf("%d씩 증가된 수 : ", su1);
	for (int i = 0; i < base_length; i++) {
		base[i] += su1;
		printf("%d ", base[i]);
	}
	puts("");

	int reverse[5] = { 0 };
	// base 배열의 값을 위 배열에 거꾸로 저장하는 코드를 작성하세요.
	int j = base_length -1;
	printf("리버스 : ");
	for (int i = 0; i < base_length; i++) {
		reverse[j - i] = base[i];
	}
	for (int i = 0; i < base_length; i++) {
		printf("%d ", reverse[i]);
	}
	puts("");

}