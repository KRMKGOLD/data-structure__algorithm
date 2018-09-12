# 자료구조(Data_Strucutre)

## 선형 구조

### 스택(Stack)

```
데이터를 일시적으로 저장하기 위해 사용하는 자료구조, 후입선출(LIFO, Last In First Out) 방식
```



![](https://github.com/KRMKGOLD/data-structure__algorithm/blob/master/Image/stack_image.jpeg?raw=true)

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

[스택 구현 코드](<https://github.com/KRMKGOLD/data-structure__algorithm/blob/master/stack.c>)

### 큐(Queue)

#### 의미

> 1. (무엇을 기다리는 사람자동차 등의) 줄
>
> 2. 대기 행렬
>
> 3. 줄을 서서 기다리다

컴퓨터의 기본적인 자료구조의 한가지로, 먼저 집어넣은 데이터가 가장 먼저 나오는 FIFO(First in First Out) 형식으로 저장하는 자료구조. 후입 선출(LIFO, Last in First Out) 방식인 스택과는 반대되는 개념을 가짐.

#### 스택과 큐

```
스택과의 차이점 1
스택에서는 push(insert)와 pop(delete)을 이용하여 구현
큐에서는 put(insert)와 get(delete)를 이용해서 구현
```

```
스택과의 차이점 2
스택은 데이터의 위치를 top과 bottom으로 가리킴
큐는 데이터의 위치를 front(head)와 rear(tail)로 가리킴
```

스택과 마찬가지로, 큐과 꽉 찬 상태에서 put하면 오버플로가 발생하고, 큐가 비어있는 상태에서 get하면 언더플로가 발생한다.



 #### 종류

큐에는 선형 큐와 원형 큐가 존재함.

#### 선형 큐

막대 모양으로 된 큐

![](https://github.com/KRMKGOLD/data-structure__algorithm/blob/master/Image/Queue.png?raw=true)

큐도 스택과 마찬가지로 크기가 제한되어 있기 때문에, get(delete)하면 앞부분이 남기 때문에, 모든 데이터를 앞으로 옮겨야한다는 단점이 존재한다.

#### 원형 큐

선형 큐의 단점인 데이터 공간이 남아잇지만 오버플로가 발생하는 경우, 그리고 모든 데이터를 앞으로 옮겨야 한다는 단점을 보완한 것이 원형 큐이다.

rear가 맨 끝으로 이동하면 다시 맨 앞으로 보내 원형으로 계속 연결하는 방식이다.

그러나 선형 큐의 단점을 보완한 원형 큐도 단점이 존재한다.

![](https://github.com/KRMKGOLD/data-structure__algorithm/blob/master/Image/Queue2.png?raw=true)

맨 데이터가 없는 상황은 왼쪽과 같은 상황이고, 데이터가 가득 차있는 상황은 오른쪽 상황이다.

이때 Front와 Rear의 위치 관계가 둘 다 같기 때문에 가득 차있는 상황인지, 데이터가 없는 상황인지 확인할 수 없다. 

이런 원형 큐의 구성을 바꾸어, 배열의 개수가 n개면 데이터의 개수가 n-1개면 큐가 가득 차있는 상태로 한 원형 큐가 만들어졌다.

![](https://github.com/KRMKGOLD/data-structure__algorithm/blob/master/Image/Queue3.png?raw=true)

n-1개만의 데이터로 큐를 구성하면 데이터가 없는 큐의 front/rear의 위치 관계를 비교할 수 있게 되면서 원형 큐의 문제를 해결할 수 있다.

#### 덱(Deque)

```
덱(Deque, double-ended queue)
양 쪽 끝에서 삽입과 삭제가 모두 가능한, 큐와 스택을 합친 상태
```

![](https://github.com/KRMKGOLD/data-structure__algorithm/blob/master/Image/Deque.png?raw=true)



![](https://github.com/KRMKGOLD/data-structure__algorithm/blob/master/Image/Deque2.jpeg?raw=true)

덱에는 두 가지 종류가 있는데, 스크롤과 셀프다.

```
스크롤(scroll) : 입력이 한쪽 끝으로만 가능하도록 설정한 데크(입력 제한 데크)
셸프(shelf) : 출력이 한쪽 끝으로만 가능하도록 설정한 데크(출력 제한 데크)
```

### 리스트(List)



## 비선형 구조

### 트리(Tree)



### 그래프(Grape)



# 알고리즘(Algorithm)

## 재귀 알고리즘





## 정렬(Sort)

### 버블 정렬(Bubble Sort)



### 삽입 정렬(Insertion Sort)



### 선택 정렬(Selection Sort)



### 퀵 정렬(Quick Sort)



### 병합 정렬(Marge Sort)