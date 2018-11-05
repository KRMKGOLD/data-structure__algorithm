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

	printf("정수집합의 정수 개수를 입력하세요. : ");
	scanf("%d", &size);

	int* arr = (int*)malloc(sizeof(int) * size);

	printf("정수집합을 입력하세요 : ");
	for (int i = 0; i < size; i++) {
		scanf("%d", &arr[i]);
	}

	int findNum;

	printf("찾으려는 수를 입력하세요 : ");
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
			printf("%d는 %d번째에 있습니다.", findNum, size + 1);
			break;
		}
		else if (min >= max) {
			printf("찾는 숫자가 없습니다.");
			break;
		}
		else if (arr[mid] > findNum) {
			max = mid - 1;
			mid = (min + max) / 2;
		}
		else if (arr[mid] == findNum) {
			printf("%d는 %d번째에 있습니다.", findNum, mid + 1);
			break;
		}
		else if (arr[mid] < findNum) {
			min = mid + 1;
			mid = (min + max) / 2;
		}
	}

 	system("pause");
}