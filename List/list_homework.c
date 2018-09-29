#include <stdio.h>
#include <stdlib.h>

int arr[12] = { 16, 32, 23, 61, 75, 57, 83, 38, 97, 79, 47, 41 };

typedef struct node {
	int data;
	struct node* next;
}Node;

Node* head = NULL;

void menu(); // 기본 메뉴 출력
void printData(); // 정렬 전, 정렬 후를 출력
void sortingData(); // 정렬
void insertData(int data);
void insertArrData();

int compare(void* first, void* second); // qsort 함수 사용 위한 callback 함수

int main() {
	insertArrData();

	menu();
}

int compare(void* first, void* second) {
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

void menu() {
	int selData;

	while (1) {
		printf("1. 출력\n");
		printf("2. 정렬\n");
		printf("3. 종료\n");
		printf("Input numebr : ");
		scanf("%d", &selData);

		switch (selData) {
		case 1:
			printData();
			break;
		case 2:
			sortingData();
			break;
		case 3:
			printf("종료합니다.");
			getchar();
			exit(0);
		default:
			break;
		}
	
		printf("\n");
	}

}

void printData() {
	Node* curr = head;

	while (curr) {
		printf("%d ", curr->data);
		curr = curr->next;
	}
	putchar('\n');
	free(curr);
}

void sortingData() {
	int i;
	int newArr[12];

	Node* curr = head;
	Node* paste = head;

	for (i = 0; i < 12; i++) {
		newArr[i] = curr->data;
		curr = curr->next;
	}

	qsort(newArr, 12, sizeof(int), compare);

	for (i = 0; i < 12; i++) {
		paste->data = newArr[i];
		paste = paste->next;
	}
	
	printf("정렬이 완료되었습니다.\n");
}

void insertData(int arguData) {
	int i = 11;

	Node* newNode = malloc(sizeof(Node));

	newNode->data = arguData;
	newNode->next = head;
	head = newNode;
}

void insertArrData() {
	int a = 11;

	while (a != -1) {
		insertData(arr[a--]);
	}
}


