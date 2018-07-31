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
	int n,ss, ans=0;
	cin >> n;
	vector <int> A(n);
	//string str;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
    ss=n;
    while (ss == n){
        ss=0;
        REP(k,n){
            if(A[k] % 2 !=0) break;
            A[k]/=2;
            ss+=1;
        }
        if(ss==n) ans++;

    }
	//sort(A.begin(), A.end());

	cout << ans << endl;
	return 0;
}
