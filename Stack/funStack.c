#include "funStack.h"
int max;
int top = -1;

int* arr;

void init() {
	printf("\n������ ������ �������ּ���(�ڿ���) : ");
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
	if (top < 0) printf("������ ����ֽ��ϴ�.\n");
	else printf("���ÿ� �����Ͱ� �����մϴ�.\n\n");

	printf("\n");
}

void isFull() {
	if (top == max) printf("������ ���� �� �ֽ��ϴ�..\n");
	else printf("������ ���� �� ���� �ʽ��ϴ�.\n\n");

	printf("\n");
}

void search() {
	int curr = 0;
	int findData;

	printf("�����͸� �˻��ϼ��� : ");
	scanf("%d", &findData);
	while (1) {
		if (findData == arr[curr]) {
			printf("stack[%d] ��ġ�� %d �����Ͱ� �����մϴ�.\n\n", curr, findData);
		}
		else if (curr >= top) {
			printf("ã�� �����Ͱ� �����ϴ�.\n\n");
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