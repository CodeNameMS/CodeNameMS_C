// ch_dynamic_allocation

#include <stdio.h>
#include <stdlib.h>

//int main() {
//
//	int* p = (int*)malloc(sizeof(int));
//	*p = 10;
//	printf("*p : %d\n", *p);
//
//	free(p);
//
//}

// -------------------------------------------

//void MemoryTest() {
//
//	int a = 10;
//
//	int* p = (int*)malloc(sizeof(int));
//	*p = 20;
// 
//	free(p);
//}
//
//int main() {
//
//	MemoryTest();
//
//}

// -------------------------------------------------

//typedef struct data {
//	int a;
//	double b;
//}Data;
//
//int* IntAlloc() {
//	return (int*)malloc(sizeof(int));
//}
//
//double* DoubleAlloc() {
//	return (double*)malloc(sizeof(double));
//}
//
//char* CharAlloc() {
//	return (char*)malloc(sizeof(char));
//}
//
//Data* DataAlloc() {
//	return (Data*)malloc(sizeof(Data));
//}
//
//int main() {
//
//	Data* pdata = DataAlloc();
//	pdata->a = 11;
//	pdata->b = 2.2;
//	printf("Data : %d - %f\n", pdata->a, pdata->b);
//
//
//	char* pc = CharAlloc();
//	*pc = 'A';
//	printf("*pc : %c\n", *pc);
//
//	double* pd = DoubleAlloc();
//	*pd = 3.4;
//	printf("*pd : %f\n", *pd);
//
//	int* pn = IntAlloc();
//	*pn = 10;
//	printf("*pn : %d\n", *pn);
//
//	free(pn);
//	free(pd);
//	free(pc);
//	free(pdata);
//}

// ----------------------------------------------------

int MessageInputInteager(const char* message) {
	int value;
	printf(message); scanf_s("%d", &value);
	while (getchar() != '\n');
	return value;
}

int* MakeArray(int size) {
	int* tmp = (int*)malloc(sizeof(int) * size);
	for (int i = 0; i < size; i++) {
		tmp[i] = i + 1; //*(tmp + i) = i + 1;
	}
	return tmp;
}

int main() {
	
	// int ar[300000];

	int size = MessageInputInteager("배열 크기 입력 > ");

	int* arr = MakeArray(size);
	for (int i = 0; i < size; i++) {
		printf("%7d", arr[i]);
		if ((i + 1) % 10 == 0)
			puts("");
	}
	puts("");

	free(arr);
}