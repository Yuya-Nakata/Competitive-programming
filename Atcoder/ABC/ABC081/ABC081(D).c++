//競技プログラミング　テンプレ
//負の時は逆!!
//死ぬほどミスってやっとAC
//いろいろ勘違いで1時間以上かかった
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cstdlib>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

int main() {
	int n, ans=0,max_n,min_n;
	bool f=0;
	cin >> n;
	vector <int> A(n);
	//string str;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int min = 1000001, max = -1000001;
	REP(i,n){
		if(max < A[i]) {max = A[i]; max_n  =i;} //maxとmax_nを分けてなかった
		if(min > A[i]) {min = A[i]; min_n = i;}
	}
	//sort(A.begin(), A.end());
	if( abs(A[min_n]) < abs(A[max_n]) ) f=1;
	//cout << f << endl;

	cout << 2*n-2 << endl;
	if(f){
		REP(i,n) { if( (i+1) != max_n + 1) cout << max_n+1 << " "<<  i+1 << endl; }
		REP(i,n-1) cout << i+1 <<" "<< i+2 << endl; //ここの処理を f=1 , f=0の時で同じ処理にしていた
	}
	else{
		REP(i,n) { if(min_n + 1 != (i+1))cout << min_n+1 << " " << i+1 << endl; }
		REP(i,n-1) cout << n <<" "<< n-i << endl; //逆順に出力しないといけない累積和
	}


	return 0;
}
