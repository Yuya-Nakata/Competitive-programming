//2017.2.12
//なぜかRun Time error

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void No( void) {
  cout <<"No" <<endl; return ;
}

int main(){
  int n;
  int s,g; //スタートとゴール
  vector <int> a,b,t;
  for(int i=0; i<n; i++){
    cin >> t[i] >> a[i] >> b[i];
  }

  g = a[0] + b[0];
  //iが0の処理
  if( t[0] < g) No();
  if(g % 2 ==0){
    if(t[0] % 2 != 0) No();
  }
  else{
    if(t[0] % 2 ==0) No();
  }

  //iが1以上

  for(int i=1; i<n; i++){
    g = a[i] + b[i];
    s = a[i-1] + b[i-1];

    if(t[i] - t[i-1] < g - (a[i-1] + b[i-1]) ) {No(); return 0; }

    if(g%2 == s%2) {
      if(t[i] - t[i-1] % 2 != 0) {No(); return 0;}
    }
    else{
      if(t[i] - t[i-1] % 2 == 0) {No(); return 0;}
    }
  }

  cout << "Yes" << endl;
  return 0;
  }
