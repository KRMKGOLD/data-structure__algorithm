#include <stdio.h>

#define ARR_SIZE 10

int arr[ARR_SIZE] = { NULL, };
int head = 0, tail = 0;

void menu(); // menu
void insert(); // insert
void delete(); // delete
void print(); // print

void checkIndexOut();

int main() {
	menu();
}

void menu() {
	int nData;

	while (1) {
		printf("HEAD : %d, TAIL : %d, ARR_SIZE : %d\n", head, tail, ARR_SIZE);
		printf("1. 삽입\n");
		printf("2. 삭제\n");
		printf("3. 출력\n");
		printf("4. 종료\n");
		printf("input Number : ");
		scanf("%d", &nData);

	switch (nData) {
		case 1:
			insert();
			break;
		case 2:
			delete();
			break;
		case 3:
			print();
			break;
		case 4:
			printf("프로그램을 종료합니다.");
			exit(0);
		default:
			printf("다시 입력하세요. \n\n");
			break;
		}

		printf("\n\n");
		checkIndexOut();
	}
}

void insert() {
	printf("숫자를 입력하세요. : ");
	scanf("%d", &(arr[tail]));

	printf("숫자 %d가 입력되었습니다.", arr[tail]);
	tail++;
}

void delete() {
	printf("큐는 FIFO 방식으로 맨 앞에 있는 데이터를 삭제합니다.\n");

	printf("%d 데이터가 삭제되었습니다.", arr[head]);
	head++;
}

void print() {
	int i = head;

	while (arr[i] != NULL && i < ARR_SIZE)
		printf("%d ", arr[i++]);
}

void checkIndexOut() {
	if (head > tail || head > ARR_SIZE - 1 || tail > ARR_SIZE) {
		printf("오류! Queue의 공간이 부족합니다! 프로그램을 종료합니다.\n");
		_sleep(3000);
		exit(1);
	}
}
