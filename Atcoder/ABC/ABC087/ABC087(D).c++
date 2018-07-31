#include <iostream>
#include <algorithm>
using namespace std;

#define MAX 100000;
int g[MAX][MAX];

int main(){

  //隣接行列を用いるなら
  int n,m,l,r,d;
  cin >> n >> m;
  for(int i=0; i<m; i++){
    cin >> l >> r >> d;
    g[l][r] = d;
  }

  



  return 0;
}
