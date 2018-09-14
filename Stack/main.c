#include "funStack.h"

int main() {
	int* arr = NULL; // main���� �Լ� ȣ��, �Լ� ���ڸ� ���Ͽ� �۵�

	int i = 0;

	while (1) {
		if (checkOverFlow() == -1) {
			system("pause");
			return 0;
		}
		printf("1. ���� ũ�� �Ҵ�\n");
		printf("2. ����(Push)\n");
		printf("3. ����(Pop)\n");
		printf("4. �ʱ�ȭ(clear)\n");
		printf("5. isEmpty?\n");
		printf("6. isFull?\n");
		printf("7. �˻�\n");
		printf("8. ���\n");
		printf("9. ����\n");
		printf("�����ǡ� ó�� ������ ��� 1���� ���� ���� ũ�⸦ �Ҵ����ּ���!\n");
		printf("Input Number : ");

		scanf("%d", &i);

		switch (i) {
		case 1: init(arr); break;
		case 2: push(arr); break;
		case 3: pop(arr); break;
		case 4: clear(arr); break;
		case 5: isEmpty(arr); break;
		case 6: isFull(arr); break;
		case 7: search(arr); break;
		case 8: print(arr); break;
		case 9:
			stackFree(arr);
			system("pause");
			return 0;
		default: printf("�ٽ� �õ��ϼ���.\n\n");
		}
	}
	stackFree(arr);
}