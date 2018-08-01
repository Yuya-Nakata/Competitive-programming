//2018.8.1
//Atcoder 過去問精選　3問目
//Accepted
//nに値を代入する前に vector <int> num(n)を宣言したのでRuntime Errorが暴発した．
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
	int n, ans=0;
	bool flag = true;
	cin >> n;
	vector <int> num(n);  //必ずnを代入してから宣言する事！！

	REP(i,n){
		cin >> num[i];
	}

  while(flag){
		flag = true;
		REP(i,n){
			if(num.at(i) %2 != 0) flag = false;
			num.at(i) = num.at(i) / 2;
	   }
		if(flag) ans++;
	}
	cout << ans << endl;
	return 0;
}
