//2017.12.10
//競技中AC length()の()を忘れた
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int max_v = 300;
const int INF = 1000000;



int main() {
	int a,b,n, ans;
  string str;
	cin >> a >> b;
  cin >> str ;
  n=str.length();
  if(a<=n && n<=b) cout << "YES" <<endl;
  else cout << "NO" << endl;

	return 0;
}
