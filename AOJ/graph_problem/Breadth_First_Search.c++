#include <iostream>
#include <queue>

using namespace std;
static const int N = 100;
static const int INFTY = (1 <<21);  //1の21bit左シフト

int n,M[N][N];
int d[N]; //距離で訪問状態(color)を管理する

void bfs(int s){
  queue <int> q;
  q.push(s);
  for(int i=0; i<n; i++){
    d[i] = INFTY; //全点の距離を初期化
  }
  d[s] = 0;
  int u;
  while(!q.empty()){
    u = q.front(); q.pop();
    for(int v = 0; v<n; v++){ //現在見ているノードにつながっている点を調べる
      if(M[u][v] == 0) continue; //辺がない
      if(d[v] != INFTY) continue;  //すでに見た
      d[v] = d[v]+1;
      q.push(v);
    }
  }
  for(int i=0; i<n; i++){ //この処理はいらんか
    cout << i+1 << " " << ((d[i] == INFTY) ? (-1) : d[i] << endl;)
  }
}

最初bfs(0);


int main(){
