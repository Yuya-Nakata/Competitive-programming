//2018.8.1
//Atcoder 過去問精選　1問目
//Accepted
//しかし　"Odd"の O が0なのかoなのかで何度かWAした
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
	int a,b;
	cin >> a >> b;

	if((a*b)%2 == 0) cout << "Even" << endl;
	else cout << "Odd" << endl;
	return 0;
}
