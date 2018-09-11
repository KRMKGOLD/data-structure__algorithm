# 자료구조(Data_Strucutre)

## 선형 구조

### 스택(Stack)

```
데이터를 일시적으로 저장하기 위해 사용하는 자료구조, 후입선출(LIFO, Last In First Out) 방식
```



![](https://www.tutorialspoint.com/data_structures_algorithms/images/stack_representation.jpg)

스택(Stack)에서는 여러가지 기능이 있는데, Push와 Pop이 대표적이다.

``` java
Push : 스택에 데이터를 넣는 과정
Pop : 스택에서 데이터를 꺼내는 과정
```

스택을 구현할 때는 Push와 Pop 이외의 추가적인 기능을 구현하기도 한다.

```
Clear : 스택을 비움
isEmpty : 스택이 비어있는 상태이면 true, 아니면 false를 반환
isFull : 스택이 가득 차있으면 true, 아니면 false를 반환
Print : 스택 데이터를 출력
Search : 스택에서 검색
```

스택에서는 Push와 Pop을 하는 위치는 맨 마지막의 넣은 데이터 윗부분이다, 즉 이 부분을 Top이라고 한다.

```
Push, Pop을 하는 위치 : Top
스택의 가장 밑바닥 부분 : Bottom
```

스택은 크기가 정해져 있기 때문에, 정해진 크기를 넘는 경우가 발생할 수 있다. 이런 경우를 스택 오버플로(Stack Overflow)라고 한다. 또한 데이터가 없는 과정에서 Pop(삭제)를 하면, 삭제할 데이터가 없는 경우가 발생, 이런 상황을 스택 언더플로(Stack Underflow)라고 한다.

스택 오버플로와 언더플로의 상태를 확인하는 방법은 Top 포인터를 이용하는 방법이 있다.

```
Top 포인터가 스택의 크기보다 커짐 : 스택 오버플로(Stack Overflow)
Top 포인터가 Bottom 포인터의 크기보다 작아짐 : 스택 언더플로(Stack Underflow)
```

[스택 구현 코드](<https://github.com/KRMKGOLD/data-structure__algorithm/blob/master/Stack/stack.c>)

### 큐(Queue)



### 리스트(List)



## 비선형 구조

### 트리(Tree)



### 그래프(Grape)



# 알고리즘(Algorithm)

## 정렬(Sort)

### 버블 정렬(Bubble Sort)



### 삽입 정렬(Insertion Sort)



### 선택 정렬(Selection Sort)



### 퀵 정렬(Quick Sort)



### 병합 정렬(Marge Sort)