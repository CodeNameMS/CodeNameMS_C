// ch11_Quiz_if-else if

#include <stdio.h>

int main() {

	//// 나이를 입력받아 버스 요금이 얼마인지 알려주는 코드를 작성
	//// - 영유아(0~6) : 0, 어린이(7~13) : 450, 학생(17~19) : 729, 일반 : 1250

	//int age;
	//printf("나이를 입력하세요 : "); scanf_s("%d", &age);
	//if (age < 7) {
	//	printf("버스요금 0원 입니다.");
	//}
	//else if (age < 14) {
	//	printf("버스요금 450원 입니다.");
	//}
	//else if (age > 16 && age < 20) {
	//	printf("버스요금 729원 입니다.");
	//}
	//else if (age >= 20)
	//	printf("버스요금 1250원 입니다.");
	//else
	//	printf("에러!");
	

	//// 세 과목의 점수를 사용해 총점, 평균, 학점을 구하는 코드 작성
	//// - 학점은 평균을 사용
	////	> 100~90 : A, 89~80 : B, 79 ~70 : C, 69 ~ 60 : D, 59 ~ 0 : F

	//int math, kor, eng, hap = 0, avg = 0;
	//printf("세 과목 점수 입력 : "); scanf_s("%d %d %d", &math, &kor, &eng);
	//hap = math + kor + eng;
	//avg = (math + kor + eng) / 3;
	//printf("총점 : %d\n", hap);
	//printf("평균 : %d\n", avg);

	//if (avg > 90 && avg <= 100)
	//	printf("학점 : A\n");
	//else if (avg > 80)
	//	printf("학점 : B\n");
	//else if (avg > 70)
	//	printf("학점 : C\n");
	//else if (avg > 60)
	//	printf("학점 : D\n");
	//else
	//	printf("학점 : F\n");

	// 몸무게(kg), 키(cm)를 사용해서 BMI(체질량지수)를 구하고, 몸상태를 알려주는 코드를 작성
	//           몸무게(kg)
	// - BMI ------------------
	//          키(m) * 키(m)
	// bmi                       몸상태
	// 0    ~ 18.5 미만          저체중
	// 18.5 ~ 23.0 미만          정상
	// 23.0 ~ 25.0 미만          과체중
	// 25.0 ~ 30.0 미만          비만
	// 30.0 ~                    고도비만

	//double weight, height, bmi=0;
	//printf("몸무게 입력 : "); scanf_s("%lf", &weight);
	//printf("키 입력 : "); scanf_s("%lf", &height);

	//height = height / 100;
	//bmi = weight / (height * height);

	//if (bmi > 30.0)
	//	printf("고도비만");
	//else if (bmi > 25.0)
	//	printf("비만");
	//else if (bmi > 23.0)
	//	printf("과체중");
	//else if (bmi > 18.5 && bmi >= 0)
	//	printf("정상");
	//else
	//	printf("결과 에러!");
}