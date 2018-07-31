#include <iostream>
#include <queue>

using namespace std;

int main(){
  long  long int a,b;
  cin >> a >> b;
  a *=b;
  if(a%2 == 0) cout << "Even" <<endl;
  else cout << "Odd" <<endl;
  return 0;
  }
