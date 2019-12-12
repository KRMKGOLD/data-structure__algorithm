#include "main.h"

void insertNode() {
	Node* newNode = (Node*)malloc(sizeof(Node));

	Node* tmpNode = NULL;
	Node* tmp2Node = NULL;

	printf("삽입할 데이터를 넣어주세요. : ");
	scanf("%d", &(newNode->data));

	newNode->left = NULL;
	newNode->right = NULL;

	if (root == NULL) root = newNode;
	else {
		tmpNode = root;
		while (1) {
			if (tmpNode->data < newNode->data) {
				tmp2Node = tmpNode->right;
				if (tmp2Node != NULL) {
					tmpNode = tmp2Node;
				}
				else {
					tmpNode->right = newNode;
					break;
				}
			}
			else if (tmpNode->data > newNode->data) {
				tmp2Node = tmpNode->left;
				if (tmp2Node != NULL) {
					tmpNode = tmp2Node;
				}
				else {
					tmpNode->left = newNode;
					break;
				}
			}
			else {
				printf("삽입할 데이터가 이미 존재합니다.\n");
				return;
			}
		}
	}
}

void deleteNodeByCheck() {
	int data;
	Node* currNode = NULL;
	Node* curr2Node = NULL;

	Node* tmpNode = NULL;
	Node* tmp2Node = NULL;

	printf("삭제할 노드를 입력해주세요 : ");
	scanf("%d", &data);

	currNode = root;

	while (1) {
		if (currNode->data < data) {
			curr2Node = currNode;
			currNode = currNode->right;
		}
		else if (currNode->data > data) {
			curr2Node = currNode;
			currNode = currNode->left;
		}
		else {
			tmpNode = currNode->left;
			if (tmpNode == NULL) {
				curr2Node->right = NULL;
				return;
			}
			tmp2Node = tmpNode->right;

			while (tmp2Node != NULL) {
				if (tmpNode->data < data) {
					tmpNode = tmpNode->right;
					tmp2Node = tmpNode->right;
				}
			}

			currNode->data = tmpNode->data;
			currNode->left = NULL;
			break;
		}
	}
}

int main() {
	int data;

	while (1) {
		printf("이진 탐색 트리\n");
		printf("1. 삽입\n");
		printf("2. 삭제\n");
		printf("3. 종료\n");
		printf("Input Number : ");
		scanf("%d", &data);

		switch (data) {
		case 1: insertNode(); break;
		case 2: deleteNodeByCheck(); break;
		case 3: return 0;
		default: printf("다시 입력해주세요.");
		}
	}

	system("pause");
}