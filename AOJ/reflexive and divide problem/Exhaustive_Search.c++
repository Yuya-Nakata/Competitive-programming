//2018.2.8 再帰関数を用いた全探索
//選ぶか選ばないか　O(2^N)

#include <cstdio>

int n, A[50];

//再帰関数　solve(i,m)を
//「i番目以降の要素を使ってmを作れる場合はtrueを返す」
//とする
int solve (int i, int m){
  if(m == 0){ return 1;}
  if(i >= n){ return 0;}

  int res = solve(i+1,m) || solve(i+1,m-A[i]) ;
  return res;
}
