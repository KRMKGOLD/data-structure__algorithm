#ifndef __FUNSTACK_H__
#define __FUNSTACK_H__

// 동적 배열을 calloc 함수를 이용하여 생성한다.

#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable : 4996)

void init();
void push();
void pop();
void clear();
void isEmpty();
void isFull();
void search();
void print();
void stackFree();
int checkOverFlow();

#endif