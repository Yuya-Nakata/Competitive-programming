//2018.2.11
//根付き木　二重連鎖木
//多分木を二分木に変換する

#include <iostream>

using namespace std;
#define MAX 100005
#define NIL -1
//左子右兄弟表現の実装
struct Node {int p,l,r ;} ;

Node T[MAX];
int n, D[MAX];

//接点uの情報を表示
void print (int u){
  cout << "parent" << T[u].p;
  cout << "depth" << D[u];

  //ここでは表示しないが　T[u].p == NILL であればその接点は "root"
  //また　T[u].l == NILL であれあば　"leaf"
}

//再帰的に深さを求める

int rec(int u,int p){
  D[u] =p;
  if(T[u].r != NILL) rec (T[u].r ,p); //右の兄弟に同じ深さを設定
  if(T[u].l != NILL) rec (T[u].l,p+1); //最も左の子に自分の深さ＋１を設定

}
