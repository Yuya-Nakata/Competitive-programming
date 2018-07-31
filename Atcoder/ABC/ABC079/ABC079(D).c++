//2017.12.1
//ABC 079　ワーシャルフロイド法を用いる
//解答を見た　意味は理解できた。
//今回はグラフの初期化を行っていないバージョン
// AC

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int max_v = 200;
const int INF = 1000000;


int main() {
	int h, w, a, ans;
	cin >> h >> w;
	int cost[10][10];

	REP(i,10){
		REP(j,10){
			cin >> cost[i][j];
		}
	}


	//ワーシャルフロイドを実行
	for(int k=0; k<10; k++){
		for(int i=0; i<10; i++){
			for(int j=0; j<10; j++){
				cost[i][j] = min( cost[i][j], cost[i][k]+cost[k][j]);
			}
		}
	}

	REP(i,h){
		REP(j,w){
			cin >> a;
			if(a >= 0) ans += cost[a][1];

		}
	}

	cout << ans << endl;

	return 0;
}
