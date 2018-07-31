//2017.12.16
//ABC082(A) 競技中AC
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int max_v = 300;
const int INF = 1000000;



int main() {
	int a,b,n=0;
  int ans;
	cin >> a >> b;
	//vector <int> A(n);
	//string str;
  if(a%2==1 && b %2 ==0 || a%2==0 && b %2 ==1) n=1;
  ans = (a+b)/2;
  ans +=n;


	//sort(A.begin(), A.end());

	cout << ans << endl;
	return 0;
}
