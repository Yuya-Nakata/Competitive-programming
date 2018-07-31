//2017.12.10
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int max_v = 300;
const int INF = 1000000;



int main() {
	int n, ans=0,a1,a2,a3;
	cin >> n;
	//vector <int> A(n);
	//string str;
	//for (int i = 0; i < n; i++) {
		//cin >> A[i];
	//}
	a1=n-(n/10)*10;
	n = n/10;
	a2=n-(n/10)*10;
	n = n/10;
	a3=n;

	if(a1==1) ans+=1;
	if(a2==1) ans +=1;
	if(a3==1) ans +=1;

	//sort(A.begin(), A.end());

	cout << ans << endl;
	return 0;
}
