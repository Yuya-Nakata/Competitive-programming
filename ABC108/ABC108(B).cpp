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
	int x1,x2,x3,x4,y1,y2,y3,y4, ans=0;
	cin >> x1 >> y1 >> x2 >> y2;

	if(x1 == x2 && y1 == -1*y2){
		x3 = -1*x2;
		y3 = y2;
		x4 = -1*x1;
		y4 = y1;
	}
	else if(x1 == -1*x2 && y1 == y2){
		x3 = x2;
		y3 = -1*y2;
		x4 = x1;
		y4 = -1*y1;
	}
	else if(x1 == x2 && y1 == -1*y2){
		x3 = -1*x2;
		y3 = y2;
		x4 = x3;
		y4 = y1;
	}
	else {
		x3 = x2;
		y3 = -1 * y2;
		x4 = x1;
		y4 = y3;
	}

		cout << x3 <<" "<<  y3 <<" " << x4 <<" " <<  y4 << endl;
	return 0;
}
