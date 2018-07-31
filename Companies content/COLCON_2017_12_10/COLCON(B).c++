//2017.12.10
//競技中AC 
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int max_v = 300;
const int INF = 1000000;



int main() {
	int n,s,ans=0;
  string str;
	cin >> n >> s;
  cin >> str;
	vector <int> A(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

  REP(k,n){
    if(str[k] =='0') ans += A[k];
    else{
      if(A[k] > s) ans+=s;
      else ans += A[k];
    }

  }

	cout << ans << endl;
	return 0;
}
