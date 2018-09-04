//2018.9.3 ABC108 A
//Accepted
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
	//vector <int> A(n);
	//string str;

	if(n % 2 == 0){ n /= 2; ans = n*n; }
	else {n /= 2; ans = n*(n+1);}
	cout << ans << endl;
	return 0;
}
