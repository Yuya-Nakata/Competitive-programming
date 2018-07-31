//2017.12.16
//競技中AC
//文字列もソートする関数があることを知った
//文字列を辞書順比較する関数があることを知った
//ソートする場合降順にする方法を知った
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int max_v = 300;
const int INF = 1000000;



int main() {
	int a,b,n=0;
  int ans;
	string x,y;

  cin >> x >> y;
  sort(x.begin(),x.end());
  sort(y.begin(),y.end(),greater<char>());
  if(x < y ){ cout << "Yes" << endl; return 0;}
  else {cout << "No" << endl; return 0;}
  //else if(x ==y){ if()return 0;}


	return 0;
}
