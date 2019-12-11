#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int arr[9][9];

	int x, y;
	int curX, curY, max = 0;

	for (y = 0; y < 9; y++) {
		for (x = 0; x < 9; x++) {
			arr[x][y] = rand() % 1000;
			printf("%3d ", arr[x][y]);
		}
		printf("\n");
	}

	printf("\n\n");

	for (y = 0; y < 9; y++) {
		for (x = 0; x < 9; x++) {
			if (arr[x][y] > max) {
				curX = x;
				curY = y;
				max = arr[x][y];
			}
		}
	}

	printf("%d \n%d %d", max, curX + 1, curY + 1);

	system("pause");
}