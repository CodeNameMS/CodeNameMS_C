// ch06_operator.c

#include <stdio.h>
/*
산술연산자
- = : 대입(할당)연산자
  +, -, *(곱셈), /(나눗셈)
  % : 나머지 값을 구하는 연산자
	> 홀수,짝수,배수 구할 때 사용
*/
//int main() {
//
//	int v1 = 10;
//	int v2 = 3;
//	printf("v1 : %d - v2 : %d\n", v1, v2);
//	printf("\n");
//
//	printf("%d + %d = %d\n", v1, v2, v1 + v2);
//	printf("%d - %d = %d\n", v1, v2, v1 - v2);
//	printf("%d * %d = %d\n", v1, v2, v1 * v2);
//	printf("%d / %d = %d\n", v1, v2, v1 / v2);
//	printf("%d %% %d = %d\n", v1, v2, v1 % v2);
//}

// ---------------------------------------------

/*
복합 대입 연산자
- 산술연산자와 대입연산자를 결합해서 사용하는게 가능합니다
- +=, -= .....
	> a += b

*/
//int main() {
//
//	int v3, v4;
//	v3 = v4 = 5;
//	printf("v3 : %d - v4 : %d\n", v3, v4);
//	printf("\n");
//		
//	printf("v3 -= 1 : %d\n", v3 += 1);
//	printf("v3 -= 1 : %d\n", v3 -= 1);
//}



// ---------------------------------------------

/*
관계(비교) 연산자
- <, >, <=, >=
  == : 같을때 참
  != : 다를때 참
- 데이터의 대소 관계를 비교하는 연산자입니다.
  결과가 참이면 1, 거짓이면 0으로 표현하고, 0 이외의 모든 값은 참입니다.
*/
//int main() {
//
//	double v5 = 3.1;
//	double v6 = 3.8;
//	printf("v5 : %.1f - v6 : %.1f\n", v5, v6);
//	printf("\n");
//
//	printf("v5 <= v6 :%d\n", v5 <= v6);
//	printf("v5 <= v6 :%d\n", v5 == v6);
//	printf("v5 <= v6 :%d\n", v5 != v6);
//}

// ---------------------------------------------

/*
논리 연산자
- &&( and 연산 )
  : 조건식_a && 조건식_b
    > 조건식_a, 조건식_b 둘다 참일때만 참입니다.

- ||( or 연산 )
  : 조건식_a || 조건식_b
    > 조건식_a, 조건식_b 둘중에 하나라도 참이면 참입니다.

*/
//int main()
//{
//	int v7 = 10;
//	int v8 = 15;
//	printf("v7 : %d - v8 : %d\n", v7, v8);
//	printf("\n");
//
//	printf("v7 == v8 && v7 < v8 : %d\n", v7 == v8 && v7 < v8);
//	printf("v7 == v8 || v7 < v8 : %d\n", v7 == v8 || v7 < v8);
//	printf("         !v7        : %d\n", !v7);
//}

// ---------------------------------------------
/*
증감 연산자
- 데이터를 1증가 시키거나, 1감소 시킬때 사용합니다.
  > ++ : 1증가
  > -- : 1감소

  > ++n : 1증가 후 다른 연산
  > n++ : 다른 연산 후 1증가
  > --n : 1감소 후 다른 연산
  > n-- : 다른 연산 후 1 감소
*/

//int main() {
//
//    int v9 = 5;
//    printf("v9 : %d\n", v9);
//    printf("\n");
//
//    int res = 0;
//    res = ++v9;
//    printf("v9 : %d - res : %d\n", v9, res);
//
//    res = v9++;
//    printf("v9 : %d - res : %d\n", v9, res);
//
//    res = --v9;
//    printf("v9 : %d - res : %d\n", v9, res);
//
//    res = v9--;
//    printf("v9 : %d - res : %d\n", v9, res);
//
//    int n = 5;
//    n++;
//    printf("n : %d\n", n);
//
//
//}

// ---------------------------------------------

//int main() {
//
//	int n = 5;
//	int res = 0;
//	res = (++n > 6) && (++n > 6);
//	printf("n : %d, res : %d\n", n, res);
//} 