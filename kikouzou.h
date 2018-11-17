#ifndef KIKOUZOU_H
#define KIKOUZOU_H
#include "bool.h"

// ツリー構造体
typedef struct tagTree{
	struct tagTree * next;
	struct tagTree * child;
	int data;
}Tree;

// ツリー初期化
BOOL InitTree(Tree * tree);
// ツリー作成
Tree * CreateTree(int data);
// ツリー接続->次
//BOOL ConnectToNext(Tree * prevTree, Tree * nextTree);
// ツリー接続->子
//BOOL ConnectToChild(Tree * parTree, Tree * childTree);
// ツリー削除
BOOL DestroyTree(Tree * tree);

#endif

