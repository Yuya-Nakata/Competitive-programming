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
	int a,b, ans=0, ten = 10;
    string s;
	cin >> a >> b;
    cin >> s;

    REP(i,a){
        if(int(s[i]) == 45) {cout << "No"  << endl; return 0;}
    }
    if(s[a] != '-') {cout << "No" <<   endl; return 0;}
    int aa = a+1;
    int bb = a+b;
    for(aa; aa <= bb; aa++){
        if(s[aa] == '-') {cout << "No" << endl; return 0;}
    }

	cout << "Yes" << endl;
	return 0;
}
