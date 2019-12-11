# 알고리즘(Algorithm)

## 재귀 알고리즘





## 정렬(Sort)

### 버블 정렬(Bubble Sort)



### 삽입 정렬(Insertion Sort)



### 선택 정렬(Selection Sort)



### 퀵 정렬(Quick Sort)



### 병합 정렬(Marge Sort)



## 탐색 알고리즘

### 순차 탐색

탐색 - Linear_Search.c

```c
for (y = 0; y < 9; y++) {
	for (x = 0; x < 9; x++) {
		if (arr[x][y] > max) {
			curX = x;
			curY = y;
			max = arr[x][y];
		}
	}
}
```

### 이진 탐색

탐색 - Binary_Search.c

```c
int min = 0, max = size - 1;
	int mid = size / 2;

	while (1) {
		if (min >= max) {
            // min이 max보다 커지는 경우는 찾는 숫자가 없는 경우
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
```



## 이외 알고리즘

### 탐욕 알고리즘

1. greedy_algorithm.c : [백준 1931번 문제](https://www.acmicpc.net/problem/1931)

탐욕 알고리즘의 예시

	- 탐욕 알고리즘 : 최적해를 구하는 데에 사용되는 근사적인 방법으로, 여러 경우 중 하나를 결정해야 할 때마다 그 순간에 최적이라고 생각되는 것을 선택해 나가는 방식으로 진행하여 최종적인 해답에 도달한다.

- 순간마다 하는 선택은 그 순간에 대해 지역적으로는 최적이지만, 그 선택들을 계속 수집하여 최종적(전역적)인 해답을 만들었다고 해서, 그것이 최적이라는 보장은 없다.