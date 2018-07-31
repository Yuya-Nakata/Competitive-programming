//2017.11.18
//コンテスト中AC
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
	cin >> n;
  vector <long long int> a(100); //ここの大きさを最初intでWA
  a[0]=2;
  a[1]=1;

  int i=2;
  while(i<=n){
    a[i]=a[i-1]+a[i-2];
    i++;
  }
  cout <<a[i-1] << endl;


	return 0;
}
