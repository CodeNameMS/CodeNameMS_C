#include <stdio.h>
int main()
{
	// �Ʒ��� �����͸� ���� or �迭�� �����Ͽ� ����ϼ���

	// 8.888 
	// d 
	// 30 
	// �̼��� 
	// 3.24 + 5.34 
	// 10+20 
	// 3.333 
	// po 
	// �� 
	// �����ٶ�abcde 
	// abcd 12345 
	// 010-1234-5678 

	double a = 8.888;
	printf("%.3f\n", a);
	char b = 'd';
	printf("%c\n",b);
	int c = 30;
	printf("%d\n", c);
	char d[7] = "�̼���";
	printf("%s\n", d);
	char e[12] = "3.24 + 5.34";
	printf("%s\n", e);
	char f[8] = "10 + 20";
	printf("%s\n", f);
	float g = 3.333;
	printf("%.3f\n", g);
	char h[3] = "po";
	printf("%s\n", h);
	char i[3] = "��";
	printf("%s\n", i);
	char j[14] = "�����ٶ�abcde";
	printf("%s\n", j);
	char k[11] = "abcd 12345";
	printf("%s\n", k);
	char l[14] = "010-1234-5678";
	printf("%s\n", l);
}