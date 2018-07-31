//2018.2.15
//しゃくとり法

#include <iostream>
using namespace std;
int main(){
  int t,n; cin >> t >> n;

  for(int i= 0; i < n; i++){
      cin >> m[i];
  }

  int ans = 0;
  for(int i = 0; i < t; i++){
    ans += m[i];  //t が　3の場合はm[0]+m[1]+m[2]が入る
  }

  int tmp = ans;
  for(int i = 0; i < n-t; i++){
    tmp += m[t+1];
    tmp -= m[i];
    if(ans < tmp)
    ans = tmp;
  }
}

  cout << ans << endl;
  return 0;
}
