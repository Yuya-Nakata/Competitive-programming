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
	int n, ans=0;
	cin >> n;

    ans = 48 - n;
	cout << ans << endl;
	return 0;
}
