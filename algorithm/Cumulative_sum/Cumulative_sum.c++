

#include <iostream>
using namespace std;

int main(){
  int t;                 //区間,幅
  int n;                //データ数
  cin >> t >> n;
  int m[300000];
  int m_t[300001];      //累積話を入れる

  for(int i = 0; i < n; i++){
    cin >> m[i];
  }

  m_t[0] = 0;
  for(int i = 0; i<n; i++){
    m_t[i+1] = m[i] + m_t[i];
  }

  int ans = m_t[t] - m_t[0];
  int tmp;
  for(int i =0; i < n-t+1; i++){
    tmp = m_t[i+1+t] - m_t[i+1];
    if(ans < tmp){
      ans = tmp;
    }
  }

  cout << ans << endl;
  return 0;
}
