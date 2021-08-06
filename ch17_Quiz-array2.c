// ch17_Quiz-array2

//#include <stdio.h>
//
//int main() {
//
//	int mat[5][5] = { 0 };
//	int data = 0;
	// 1 2 3 4 5
	// 6 7 8 9 10
	// 11 12 13 14 15
	// 16 17 18 19 20
	// 21 22 23 24 25
	//data = 1;
	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		mat[i][j] = data;
	//		++data;
	//	}
	//}
	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		printf("%3d", mat[i][j]);
	//	}
	//	puts("");
	//}
	//puts("");


	//// 25 24 23 22 21
	//// 20 19 18 17 16
	//// 15 14 13 12 11
	//// 10  9  8  7  6
	////  5  4  3  2  1
	//data = 25;
	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		mat[i][j] = data;
	//		--data;
	//	}
	//}
	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		printf("%3d", mat[i][j]);
	//	}
	//	puts("");
	//}
	//puts("");



	//// 1 6 11 16 21
	//// 2 7 12 17 22
	//// 3 8 13 18 23
	//// 4 9 14 19 24
	//// 5 10 15 20 25

	//data = 1;
	//int add = 1;
	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		mat[i][j] = data;
	//		data += 5;
	//	}
	//	++add;
	//	data = add;
	//}
	//for (int i = 0; i < 5; i++) {
	//	for (int j = 0; j < 5; j++) {
	//		printf("%3d", mat[i][j]);
	//	}
	//	puts("");
	//}
	//puts("");

	//// 5 4 3 2 1
	//// 6 7 8 9 10
	//// 15 14 13 12 11
	//// 16 17 18 19 20
	//// 25 24 23 22 21

//	data = 1;
//	for (int i = 0; i < 5; i++) {
//		if (i % 2 == 0) {
//			for (int j = 4; j >= 0; j--) {
//				mat[i][j] = data;
//				++data;
//			}
//		}
//		else {
//			for (int j = 0; j < 5; j++) {
//				mat[i][j] = data;
//				++data;
//			}
//		}
//	}
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			printf("%3d", mat[i][j]);
//		}
//		puts("");
//	}
//	puts("");
//}


	


//int main() {
//
//	int gugudan[9][9] = { 0 };
//	// 위 배열에 구구단 값을 저장해서 출력하는 코드를 작성하세요
//
//	for (int i = 0; i < 8; i++) {
//		for (int j = 0; j < 9; j++) {
//			gugudan[i][j] = (i+2) * (j+1);
//		}
//	}
//	printf("--------------- 구구단 ---------------\n");
//	for (int i = 0; i < 8; i++) {
//		for (int j = 1; j < 10; j++) {
//			printf("%4d", gugudan[i][j]);
//		}puts("");
//	}puts("");


//	int point[][5] = { { 3, 5, 9, 1, 4}, { 8, 9, 2, 7, 4} };
//	// 위 배열의 각행의 합, 전체의 합을 구하는 코드를 작성하세요
//	int hap = 0;
//	int hap2 = 0;
//	int hap_all = 0;
//	for (int i = 0; i < 2; i++) {
//		for (int j = 0; j < 5; j++) {
//			if (i == 0) {
//				hap += point[i][j];
//			}
//			else
//				hap2 += point[i][j];
//			hap_all += point[i][j];
//		}
//	}
//	printf("1행의 합 : %d\n", hap);
//	printf("2행의 합 : %d\n", hap2);
//	printf("총 합 : %d\n", hap_all);
//}
