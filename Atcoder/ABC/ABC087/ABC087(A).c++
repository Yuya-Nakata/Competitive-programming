#include <iostream>

using namespace std;

int main(){

  int a,b,x;

  cin >> x >> a >> b;

  x -= a;
  while(x>=0){
    x -= b;
  }
  x += b;
  cout << x;
  return 0;
}
