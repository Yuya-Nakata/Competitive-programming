//競技プログラミング　テンプレ
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int max_v = 300;
const int INF = 1000000;



int main() {
	int n,s,m, ans=0;
    map<int, int> mp;
	cin >> n;
	vector <int> A(n);
	//string str;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
    REP(i,n){
        s=A[i];
        mp[i]++;
    }
    for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
        s= itr ->first;
        m= itr ->second;
        if(s<m) ans+=m-s;
    }
	//sort(A.begin(), A.end());

	cout << ans << endl;
	return 0;
}
