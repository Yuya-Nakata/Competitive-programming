//2018 1.7 競技中AC
//マップしてすべての要素数を答える
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
	vector <int> A(n);
	//string str;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	map<int ,int> mp;
	REP(i,n){
		mp[A[i]] = 1;
	}

	ans = mp.size();
	//sort(A.begin(), A.end());

	cout << ans << endl;
	return 0;
}
