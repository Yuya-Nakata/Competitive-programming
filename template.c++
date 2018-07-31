//競技プログラミング　テンプレ
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cstdlib> //abs() これは整数のみ

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int max_v = 300;
const int INF = 1000000;



int main() {
	int n, ans=0;
	cin >> n;
	//vector <int> A(n);
	//string str;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
	 s= itr ->first; //キー
	 m= itr ->second; //値
 	}
	//sort(A.begin(), A.end());

	cout << ans << endl;
	return 0;
}
