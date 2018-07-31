//2017.12.10
//分からなかった　なんとなくアルゴリズムは思いついたが複雑で実装できず
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int max_v = 300;
const int INF = 1000000;



int main() {
	int n,,x,ans,i=0;
	cin >> n >> x;
	vector <int> A(n);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}

  REP(k,n){
    ans=0;
    if(k==0) cout << x;
    else if(k==1) cout << x+(A[n-1])
    else{
      while(A[i] - A[0] < x && i+2 < n){
        i++;
      }


    }


  }

	cout << ans << endl;
	return 0;
}
