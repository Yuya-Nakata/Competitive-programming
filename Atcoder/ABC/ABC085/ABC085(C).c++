//競技中わからなかった
//最初大きいものを最大限使う方針を立てたができない
//貪欲法では　3^n　かかる気がする
//解説見たら一発AC あり本の最初に似たのがあったわ
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
	int n, ans=0, y ,a,b,c,money;
	cin >> n;
	cin >> y;

	for(a=0; n >= a; a++){
		for (b = 0; n >= a+b; b++){
			c = n-a-b;
			money = 10000 * a + 5000 * b + 1000 * c;
			if(money == y) {
				cout << a <<' ' << b << ' ' << c << endl;
				return 0;
			}
		}
	}

	cout << "-1 -1 -1" << endl;
	return 0;
}
