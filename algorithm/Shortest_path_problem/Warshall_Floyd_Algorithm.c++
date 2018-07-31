//2017.12.1
//最短経路問題　ワーシャルフロイド法
//例題　ABC012 (D)

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

const int max_v = 300;
const int INF = 1000000;


int main() {
	int v, e, i, j, minv = INF, distance;
	cin >> v >> e;			//vertexとedgeを代入
    int d[max_v][max_v];

	for (i = 0; i < v; i++) {
		for(j=0; j < v; j++){
      		if(i==j) {d[i][j] = 0;}
      		else     {d[i][j] = INF;}
		}
	}

	//グラフを読み込む
    for(i = 0; i < e; i++){
			int u,s,c;
	  		cin >> u >> s >> c;
			u--; s--;
			d[u][s] = c; d[s][u]=c;
	}

	//ワーシャルフロイドを実行
	for(int k=0; k<v; k++){
		for(i=0; i<v; i++){
			for(j=0; j<v; j++){
				d[i][j] = min( d[i][j], d[i][k]+d[k][j]);
			}
		}
	}

	/*for(i=0; i<v; i++){
		distance = 0;
		for(j=0; j<v; j++){
			if(d[i][j] != INF){
				distance += d[i][j];
			}							//なぜだめだったのか　ＲＥになった
		}
		if(minv > distance){
			minv = distance;
		}
	}
	cout << minv << endl;

	*/
	//パクリコード
	int mi = INF;
	REP(i, v) {
		int ma = 0;
		REP(j, v) {
			ma = max(ma, d[i][j]);
		}
		mi = min(mi, ma);
	}

	cout << mi << endl;
	return 0;
}
