#include <stdio.h>
int main()
{
	// 아래의 데이터를 변수 or 배열에 저장하여 출력하세요

	// 8.888 
	// d 
	// 30 
	// 이순신 
	// 3.24 + 5.34 
	// 10+20 
	// 3.333 
	// po 
	// ㄱ 
	// 가나다라abcde 
	// abcd 12345 
	// 010-1234-5678 

	double a = 8.888;
	printf("%.3f\n", a);
	char b = 'd';
	printf("%c\n",b);
	int c = 30;
	printf("%d\n", c);
	char d[7] = "이순신";
	printf("%s\n", d);
	char e[12] = "3.24 + 5.34";
	printf("%s\n", e);
	char f[8] = "10 + 20";
	printf("%s\n", f);
	float g = 3.333;
	printf("%.3f\n", g);
	char h[3] = "po";
	printf("%s\n", h);
	char i[3] = "ㄱ";
	printf("%s\n", i);
	char j[14] = "가나다라abcde";
	printf("%s\n", j);
	char k[11] = "abcd 12345";
	printf("%s\n", k);
	char l[14] = "010-1234-5678";
	printf("%s\n", l);
}