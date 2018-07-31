//2017.11.18
//コンテスト中AC
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
 if(n.at(0)==n.at(1)&&n.at(1)==n.at(2)||n.at(1)==n.at(2)&&n.at(2)==n.at(3)){
  cout << "Yes" <<endl;}


  else cout <<"No" << endl;


	return 0;
}
