//2017.11.18
//競技中にAC
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
  int n,a,b,c,d,i=0;
  vector <int> bou(10);

  string op("+++++-+-----+-+-+--++--+");
  string a1,a2,a3;
	cin >> n;
  a=n/1000;
  b=n/100-a*10;
  c=n/10-(n/100)*10;
  d=n-(n/10)*10;

  bou[0]=a+b+c+d;
  bou[1]=a+b+c-d;
  bou[2]=a+b-c-d;
  bou[3]=a-b-c-d;
  bou[4]=a+b-c+d;
  bou[5]=a-b+c-d;
  bou[6]=a-b+c+d;
  bou[7]=a-b-c+d;

  //op = +++++-+-----+-+++--++--+;

    for (i=0; i<=7; i++){
      if(bou[i]==7) {break;}
  }

  //if(i==8) i--;
  a1=op.at(i*3);
  a2=op.at(i*3+1);
  a3=op.at(i*3+2);
  cout << a << a1 << b << a2 << c << a3<< d <<"=7"<<endl;

	return 0;
}
