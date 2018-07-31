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
	int n, ans=0 ,hp;
	cin >> n >> hp;
	vector <int> A(n);
	vector <int> B(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i] >> B[i];
	}

	int max = *max_element(A.begin(),A.end());
	sort(B.begin(), B.end());
	REP(i,n){
		if(max <= B[n-i-1]) {hp -= B[n-i-1]; ans++;}
		if(hp <=0) {cout << ans ; return 0;}
	}

	while(hp >0){
		hp -= max;
		ans ++;
	}

	cout << ans << endl;
	return 0;
}
