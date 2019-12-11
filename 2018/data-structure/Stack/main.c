#include "funStack.h"

int main() {
	int* arr = NULL; // main에서 함수 호출, 함수 인자를 통하여 작동

	int i = 0;

	while (1) {
		if (checkOverFlow() == -1) {
			system("pause");
			return 0;
		}
		printf("1. 스택 크기 할당\n");
		printf("2. 삽입(Push)\n");
		printf("3. 삭제(Pop)\n");
		printf("4. 초기화(clear)\n");
		printf("5. isEmpty?\n");
		printf("6. isFull?\n");
		printf("7. 검색\n");
		printf("8. 출력\n");
		printf("9. 종료\n");
		printf("※주의※ 처음 실행한 경우 1번을 통해 스택 크기를 할당해주세요!\n");
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
		default: printf("다시 시도하세요.\n\n");
		}
	}
	stackFree(arr);
}