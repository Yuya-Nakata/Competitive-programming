//ABC080(A)
//2017.12.3
//競技中AC
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int max_v = 300;
const int INF = 1000000;



int main() {
	int n,a,b, ans;
	cin >> n >> a >> b;
	//vector <int> A(n);

    if(n*a >= b){cout << b << endl;}
    else  cout << a*n << endl;


	return 0;
}
