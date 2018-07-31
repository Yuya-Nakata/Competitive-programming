//2017.12.19 AC
//競技中わからんかった　mapを使ってsortすれば良い
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
	int n, ans=0 ,k ,ii=0;
	int mp_size ,min,s,m,ban;
	cin >> n >> k;
	vector <int> A(n);

	//string str;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	map<int ,int> mp;

	REP(i,n){
		mp[A[i]] ++ ;
	}
	mp_size = mp.size();
	vector <int> B (mp_size);
		for(auto itr = mp.begin(); itr != mp.end(); ++itr) {
		 	m= itr ->second; //値
			B[ii] = m;
			ii++;
		 }
		 sort(B.begin(), B.end());
	ii = 0;
	while (mp_size > k){
		ans += B[ii];
		ii++;
		mp_size--;
	}

	cout << ans << endl;
	return 0;
}
