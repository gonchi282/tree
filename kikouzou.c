#include <stdio.h>
#include <stdlib.h>
#include "kikouzou.h"

// main
int main(){
	Tree * root;
	Tree * tree;

	// ツリー作成
	tree = CreateTree(1);
	// 最初のツリーをtreeに設定
	root = tree;

	// 次を接続
	tree->next = CreateTree(2);
	if(NULL == tree->next){
		return 0;
	}

	// 子を接続
	tree->child = CreateTree(3);
	if(NULL == tree->child){
		return 0;
	}

	printf("tree = %d\n", tree->data);
	printf("tree2 = %d\n", tree->next->data);
	printf("tree3 = %d\n", tree->child->data);

	return 0;
}


// ツリー初期化
BOOL InitTree(Tree * tree){
	
	// treeがNULLの場合
	if(NULL == tree){
		return FALSE;
	}

	tree->next = NULL;
	tree->child = NULL;
	tree->data = 0;

	return TRUE;
}

// ツリー作成
Tree * CreateTree(int data){
	Tree * tree;	// ツリーのアドレスを入れるためのポインタ

	// treeメモリ確保
	tree = (Tree *)malloc(sizeof(Tree));
	if(NULL == tree){
		return NULL;	// 異常終了
	}

	// treeの中身設定
	tree->next = NULL;
	tree->child = NULL;
	tree->data = data;

	return tree;	// 正常終了
}

/*
// ツリー接続->次
BOOL ConnectToNext(Tree * prevTree, Tree * nextTree){
	// NULLチェック
	if((NULL == prevTree) || (NULL == nextTree)){
		return FALSE;	// 異常終了
	}

	// 接続
	prevTree->next = nextTree;

	return TRUE;	// 正常終了
}


// ツリー接続->子
BOOL ConnectToChild(Tree * parTree, Tree * childTree){
	// NULLチェック
	if((NULL == parTree) || (NULL == childTree)){
		return FALSE;
	}

	// 子に接続
	parTree->next = childTree;

	return TRUE;	//正常終了
}
*/

// ツリー削除
BOOL DestroyTree(Tree * tree){
	return TRUE;
}

