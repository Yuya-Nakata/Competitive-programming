//2017.12.1
//考えても解けなかった
//典型アルゴリズムではなくいかに頭を使って2パターンしかないか気づけるかが問題

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib> //絶対値を返す関数 abs()に必要

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int max_v = 300;
const int INF = 1000000;



int main() {
	int n, z, w, ans;
	cin >> n >> z >> w;
	vector <int> A(n);
	REP(i,n) {
		cin >> A[i];
	}

	if(n==1){
		ans = abs(A[n-1]-w);
		cout << ans << endl;
		return 0;
	}

	else{
		ans = max( abs( A[n-1] - w), abs( A[n-2]-A[n-1]));
		cout << ans << endl;
	}
	return 0;
}
