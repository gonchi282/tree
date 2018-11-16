#ifndef KIKOUZOU_H
#define KIKOUZOU_H
#include "bool.h"

// ツリー構造体
typedef struct tagTree{
	struct tagTree * next;
	struct tagTree * child;
	int * data;
}Tree;

BOOL InitTree(Tree * tree);
BOOL CreateTree(Tree * tree, int data);
BOOL ConnectToNext(Tree * prevTree, Tree * nextTree);
BOOL DestroyTree(Tree * tree);

#endif

