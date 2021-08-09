// ch20_rand.c

#include <stdio.h>
#include <stdlib.h> // rand();
#include <time.h> // time(NULL);

/*
rand()
- rand()
	> 0 ~ 32767 ������ ���� �ϳ��� �ڵ����� �����ؼ� ��ȯ�ϴ� �Լ��Դϴ�.

srand()
- srand( �ʱⰪ )
	> rand() �Լ��� �ʱⰪ�� �������ִ� �Լ��Դϴ�.

time()
- time(NULL)
	> 1970�� 1�� 1�� 0�ú��� ��������� �ð��� �ʴ����� ��ȯ�ϴ� �Լ��Դϴ�.
*/

int main() {

	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		int data = rand() % 10 + 1; // ���� : rand() % ���� + ���۰�
		printf("%d\n", data);
	}
	puts("");

	int a = rand() % 26 + 65;
	printf("%d, %c\n", a, a);

	while (1) {
		int r = rand();
		printf("%d\n", r);
		if (r == 0) {
			break;
		}
	}
}