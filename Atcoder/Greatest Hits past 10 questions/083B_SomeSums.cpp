//2018.8.1
//Atcoder 過去問精選　5問目
//Accepted
//1万のコーナーケースを考えてなかった ketaの要素数が4つしかないため10000の時 RE
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
	int N,a,b ,ans=0;
	cin >> N >> a >> b;

	while(N > 0){
		int plotN = N;
		int i = 0;
		int sum = 0;
		vector <int> keta{0,0,0,0,0};
		while(plotN > 0){
			keta.at(i) = plotN % 10;
			plotN = plotN / 10 ;
			i++;
		}
		REP(j,5) sum += keta.at(j);
		if(sum >= a && sum <= b) ans += N;
		N --;
	}


	cout << ans << endl;
	return 0;
}
