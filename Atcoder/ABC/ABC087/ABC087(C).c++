#include <iostream>
#include <algorithm>
using namespace std;

int main(){

  int n,a[101],b[101],maxnum=0,l;
  int ruiseki_a[101],ruiseki_b[101];

  ruiseki_a[0] = 0; b[0] = 0;
  cin >> n;
  for(int i =1; i<=n ; i++) {cin >> a[i]; ruiseki_a[i]=a[i]+ruiseki_a[i-1];}
  for(int i =1; i<=n ; i++) {cin >> b[i];}
  ruiseki_b[n] = b[n];
  for(int i=n-1; i>=1; i--){ ruiseki_b[i] =b[i] + ruiseki_b[i+1];
  }

  for(int i =1; i<=n; i++){
      l = ruiseki_a[i] + ruiseki_b[i];
      maxnum =　max(l,maxnum);
    }

  /*  for(int i=1; i<=n; i++){
        cout<<"ra" << i << ':' <<ruiseki_a[i] << endl;
        cout<<"rb" <<  i << ':' <<ruiseki_b[i] << endl;
    }
  */

  cout << maxnum;
  return 0;
}
