//ABC080(B)
//2017.12.3
//競技中ACだったが29行目のミスで時間ロス

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

int main() {
	 long long int n, ans=0;
     int i=0,n1;
	cin >> n;
     n1 = n;
	vector <long long  int> a(10);

    //入力されたnの値の各桁の数字の和を求める
    while(1){
        a[i] = n - (n /10)*10;  //各桁の数字が入る
        i++;
        n = n/10;
        if(n==0){break;}
    }

    for (int k; k<=i; k++) {ans +=a[k];}
    if(n1 % ans ==0) cout << "Yes" << endl; //ここで最初　n%ansだったのでミス　nはwhileの中で変化している。
    else cout << "No" << endl;

	return 0;
}
