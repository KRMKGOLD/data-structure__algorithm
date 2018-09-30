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
		printf("1. ����\n");
		printf("2. ����\n");
		printf("3. ���\n");
		printf("4. ����\n");
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
			printf("���α׷��� �����մϴ�.");
			exit(0);
		default:
			printf("�ٽ� �Է��ϼ���. \n\n");
			break;
		}

		printf("\n\n");
		checkIndexOut();
	}
}

void insert() {
	printf("���ڸ� �Է��ϼ���. : ");
	scanf("%d", &(arr[tail]));

	printf("���� %d�� �ԷµǾ����ϴ�.", arr[tail]);
	tail++;
}

void delete() {
	printf("ť�� FIFO ������� �� �տ� �ִ� �����͸� �����մϴ�.\n");

	printf("%d �����Ͱ� �����Ǿ����ϴ�.", arr[head]);
	head++;
}

void print() {
	int i = head;

	while (arr[i] != NULL && i < ARR_SIZE)
		printf("%d ", arr[i++]);
}

void checkIndexOut() {
	if (head > tail || head > ARR_SIZE - 1 || tail > ARR_SIZE) {
		printf("����! Queue�� ������ �����մϴ�! ���α׷��� �����մϴ�.\n");
		_sleep(3000);
		exit(1);
	}
}
