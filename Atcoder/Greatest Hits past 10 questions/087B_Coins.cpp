//2018.8.1
//Atcoder 過去問精選　4問目
//Accepted
//50円玉を10円玉と勘違いしてWA
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cstdlib> //abs() これは整数のみ

using namespace std;

#define REP(i,n) for(int i = 0; i <= (int)(n); ++i)

const int max_v = 300;
const int INF = 1000000;



int main() {
	int a,b,c,n,x,ans=0;
	cin >> a >> b >> c >> x;
  REP(i1,a){
		REP(i2,b){
			REP(i3,c){
				if(x == i1*500 + i2*100 + i3*50) ans++;
			}
		}
	}

	cout << ans << endl;
	return 0;
}
