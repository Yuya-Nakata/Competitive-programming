//2018.8.1
//Atcoder 過去問精選　2問目
//Accepted
//29行目の何と何を比較しているのか意識する事

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <cstdlib> //abs() これは整数のみ
#include <sstream>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int max_v = 300;
const int INF = 1000000;



int main() {
  string num,s;
	int ans=0,n=3;
	cin >> num;
	REP(i,3) {
		if(num[i] == '1') ans ++;
	}


	cout << ans << endl;
	return 0;
}
