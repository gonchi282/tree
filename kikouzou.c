#include <stdio.h>
#include <stdlib.h>
#include "kikouzou.h"


int main(){
	Tree * tree;

	// treeにメモリ確保
	tree = (Tree *)malloc(sizeof(Tree));
	// メモリ確保失敗
	if(NULL == tree){
		printf("メモリ確保失敗\n");
	}

	printf("tree = %p \n", tree);

	// メモリ開放
	free(tree);
	tree = NULL;

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
BOOL CreateTree(Tree * tree, int data){
	return TRUE;
}

// ツリー接続->次
BOOL ConnectToNext(Tree * prevTree, Tree * nextTree){
	return TRUE;
}
// ツリー接続->子
BOOL ConnectToChild(Tree * parTree, Tree * childTree){
	return TRUE;
}
// ツリー削除
BOOL DestroyTree(Tree * tree){
	return TRUE;
}
