#include "funStack.h"
int max;
int top = -1;

int* arr;

void init() {
	printf("\n스택의 공간을 설정해주세요(자연수) : ");
	scanf("%d", &max);
	max--;

	arr = (int*)malloc(sizeof(int) * max);

	printf("\n\n");
}

void push() {
	int data;

	scanf("%d", &data);

	top++;
	arr[top] = data;

	printf("\n\n");
}

void pop() {
	top--;

	printf("\n\n");
}

void clear() {
	top = -1;

	printf("\n\n");
}

void isEmpty() {
	if (top < 0) printf("스택이 비어있습니다.\n");
	else printf("스택에 데이터가 존재합니다.\n\n");

	printf("\n");
}

void isFull() {
	if (top == max) printf("스택이 가득 차 있습니다..\n");
	else printf("스택이 가득 차 있지 않습니다.\n\n");

	printf("\n");
}

void search() {
	int curr = 0;
	int findData;

	printf("데이터를 검색하세요 : ");
	scanf("%d", &findData);
	while (1) {
		if (findData == arr[curr]) {
			printf("stack[%d] 위치에 %d 데이터가 존재합니다.\n\n", curr, findData);
		}
		else if (curr >= top) {
			printf("찾는 데이터가 없습니다.\n\n");
		}
		else {
			curr++;
		}
	}
}

void print() {
	int curr = -1;
	printf("stack : ");
	while (1) {
		if (curr >= top) {
			break;
		}
		printf("%d ", arr[++curr]);
	}
	printf("\n\n");
}

void stackFree() {
	free(arr);
}

int checkOverFlow() {
	if (max < top) {
		printf("Overflowed!!!\n");
		return -1;
	}
	return 0;
	_sleep(1000);
}