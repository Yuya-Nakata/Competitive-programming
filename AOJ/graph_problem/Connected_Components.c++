//2017.2.13
//連結成分
//vectorを用いた連結リストでグラフを実装
//それはノード数が多いと隣接グラが使えないから


#include <iostream>
#include <vector>
#include <stack>
using namespace std;
static const int MAX = 100000;
static const int NIL = -1;

int n;
vector <int> G [MAX];
int color [MAX];

void dfs(int r,int c){
  stack <int> S;
  S.push(r);
  color [r] = c;
  while( !S.empty()){
    int u = S.top(); S.pop();
    for(int i =0; i<G[u].size(); i++){ //　uにくっついているノード全て探索
      int v = G[u][i];
      if(color[v] == NIL){
        color[v] = c;
        S.push();
      }
    }
  }
}

void assignColor(){
  int id = 1;
  for(int i = 0; i < n; i++) color [i] = NIL;
  for(int u = 0; u < n; u++) {
    if(color[u] == NIL) dfs(u,id++)
  }
}
