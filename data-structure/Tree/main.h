#ifndef __TREE_H__
#define __TREE_H__

#include <stdio.h>
#include <stdlib.h>

#pragma warning (disable : 4996)

struct node {
	int data;
	struct node* left;
	struct node* right;
};

typedef struct node Node;

Node* root = NULL;

void insertNode();
void deleteNodeByCheck();

#endif // !__TREE_H__