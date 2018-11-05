#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable : 4996)

#define size SIZE

int func_compare(const void * first, const void * second) {
	if (*(int*)first > *(int *)second)
		return 1;
	else if (*(int*)first < *(int *)second)
		return -1;
	else
		return 0;
}

void main() {
	int size;

	printf("���������� ���� ������ �Է��ϼ���. : ");
	scanf("%d", &size);

	int* arr = (int*)malloc(sizeof(int) * size);

	printf("���������� �Է��ϼ��� : ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	int findNum;

	printf("ã������ ���� �Է��ϼ��� : ");
	scanf("%d", &findNum);

	qsort(arr, size, sizeof(int), func_compare);

	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	int min = 0, max = size - 1;
	int mid = size / 2;

	while (1) {
		if (arr[size - 1] < findNum) {
			printf("%d�� %d��°�� �ֽ��ϴ�.", findNum, size + 1);
			break;
		}
		else if (min >= max) {
			printf("ã�� ���ڰ� �����ϴ�.");
			break;
		}
		else if (arr[mid] > findNum) {
			max = mid - 1;
			mid = (min + max) / 2;
		}
		else if (arr[mid] == findNum) {
			printf("%d�� %d��°�� �ֽ��ϴ�.", findNum, mid + 1);
			break;
		}
		else if (arr[mid] < findNum) {
			min = mid + 1;
			mid = (min + max) / 2;
		}
	}

 	system("pause");
}