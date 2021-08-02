// ch14-Quiz_while.c

#include <stdio.h>

int main() {

	// 구구단 값을 입력받아서 해당 단의 값을 모두 출력하는 코드를 작성하세요
	// - 2 ~ 9 단 사이의 값이 아니면 출력되지 않습니다

	/*int su1, su2 = 1;
	printf("출력할 구구단의 수 입력(2~9) : "); scanf_s("%d", &su1);
	if (su1 > 1 && su1 < 10) {
		while (su2<=9) {
			printf("%d * %d = %d\n", su1, su2, su1 * su2);
			++su2;
		}
	}
	else {
		printf("2~9 사이의 수가 아닙니다 !");
	}
}*/
	// 나이, 성별(m, f)을 입력받아서 출력하는 코드를 작성하세요
	// - 나이 : 0 ~ 130 사이만 처리 가능합니다
	// 성별 : m, f만 처리 가능하고, m 이면 "남성", f 이면 "여성"으로 출력하세요

	/*int age;
	char sex;
	printf("나이 입력 : "); scanf_s("%d", &age);
	if (age >= 0 && age <= 130) {
		getchar();
		printf("성별 입력 : "); sex = getchar();
		if (sex == 'm' || sex == 'f' || sex == 'M' || sex == 'F') {
			if (sex == 'm' || sex == 'M') {
				printf("성별 : 남성\n");
			}
			else
				printf("성별 : 여성\n");
			printf("나이 : %d\n", age);
		}
		else
			printf("성별 잘못 입력 !");
	}
	else
		printf("나이 잘못 입력 ! ");*/

//	int age;
//	char sex;
//
//	printf("성별 입력 : "); sex = getchar();
//
//	while (sex == 'm' || sex == 'f' || sex == 'M' || sex == 'F') {
//		if (sex == 'm' || sex == 'M') {
//			printf("성별 : 남성\n");
//			break;
//		}
//		else
//			printf("성별 : 여성\n");
//	}
//
//
//	printf("나이 입력 : "); scanf_s("%d", &age);
//	while (age >= 0 && age <= 130) {
//		printf("나이 : %d", age);
//		break;
//	}


	// 숫자 3개를 입려받고, 입력받은 수들의 합을 구하는 코드를 작성하세요
	// 더하는 값은 +(plus)만 가능하고, 입력 값은 모두 저장되어 있지 않아도 됩니다

	/*int su1, result=0, i=0;
	
	do {
		printf("수를 입력하세요 : "); scanf_s("%d", &su1);
		result += su1;
		printf("result(수의 합)의 값 : %d\n", result);
		i++;
	} while (i!=3);*/

	// 치즈 10box가 저장되어 있는 창고에 쥐(암수 1쌍)가 살고 있습니다
	// 쥐 한마리가 하루에 먹을 수 있는 치즈의 양은 20g 이고, 치즈를 먹은 10일마다 쥐의 수가 2배씩 증가합니다
	// 몇일만에 창고의 치즈가 모두 없어지고, 이때까지의 쥐는 모두 몇마리 인지를 구하는 코드를 작성하세요
	// - 치즈 1box : 1kg
	
	/*int cheez = 10, day=0, mouse=2;
	cheez = 10 * 1000;

	do {
		cheez = cheez - (mouse*20);
		if (day % 10 == 0 && day != 0)
			mouse *= 2;
		++day;
	} while (cheez >= 0);
	printf("치즈가 사라진 날 : %d일\n", day);
	printf("총 쥐의 수 : %d마리", mouse);
}*/