//2018.2.4 双方向連結リスト
//STLの<list>で備わっている
//探索と削除　O(N)

#include <cstdio>
#include <cstdlib>
#include <cstring>

//ノードの定義
struct Node{
    int key;
    Node *next ,*prev;
};

Node *nill;

//値を検索
Node* ListSearch (int key){
    Node *cur = nil -> next; //番兵の次の要素からたどる
    while (cur != nil && cur -> key != key){
        cur = cur-> next;
    }
    return cur;
}

//リストの初期化
void init() {
    nill = (Node *) malloc (sizeof(Node));
    nill ->next = nill;
    nill ->prev = nill;
}

//t番目のノードを削除
void delete Node (Node *t){
    if (t == nil) return ; //tが番兵の時は処理しない
    t -> prev -> next = t->next;
    t -> next -> prev = t->prev;
    free(t);
}

//先頭のノードを削除する
void deleteFirst(){
    deleteNode(nill -> next);
}
//最後尾のノードを削除
void deleteLast(){
    deleteNode(nill -> prev);
}

void deleteKey (int key) {
    //検索したノードを削除
    deleteNode(ListSearch(key));
}
