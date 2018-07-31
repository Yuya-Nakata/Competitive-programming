#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main(){
  string s,v;
  int x=1;
  cin >> s >> v;
  s = s+v;
  int a = stoi(s); //文字を数字に変換
  while(a <= x){
    x *=x;
    if(a == x) {cout << "Yes" <<endl; return 0;}
    x++;
  }

  cout << "No" << endl;
  return 0;
}
