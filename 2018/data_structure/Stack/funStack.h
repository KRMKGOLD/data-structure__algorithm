#ifndef __FUNSTACK_H__
#define __FUNSTACK_H__

// ���� �迭�� calloc �Լ��� �̿��Ͽ� �����Ѵ�.

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