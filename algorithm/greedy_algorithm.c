#include <stdio.h>
#include <stdlib.h>

int main() {
	int data;

	printf("�۾��� �� : ");
	scanf("%d", &data);

	int** arr = malloc(sizeof(int*) * data);
	for (int i = 0; i < data; i++) {
		arr[i] = malloc(sizeof(int) * 2);
	}

	for (int i = 0; i < data; i++) {
		printf("%d��° �۾��� ���۽ð��� ����ð��� �Է��ϼ���. : ", i + 1);
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	int tmpArr[2] = { 0 };
	int tempData = data;

	for (int i = 0; i < tempData - 1; i++) {
		for (int j = 0; j < tempData - 1 ; j++) {
			if (arr[j][1] > arr[j + 1][1]) {
				tmpArr[0] = arr[j][0];
				tmpArr[1] = arr[j][1];

				arr[j][0] = arr[j + 1][0];
				arr[j][1] = arr[j + 1][1];

				arr[j + 1][0] = tmpArr[0];
				arr[j + 1][1] = tmpArr[1];

				j++;
			}
		}
	}

	int checkNum = 0, pivot = 0;
	for (int i = 0; i < data; i++) {
		if (arr[i][0] >= pivot) {
			pivot = arr[i][1];
			checkNum++;
		}
	}

	printf("%d", checkNum);
}
