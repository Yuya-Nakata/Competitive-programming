//挿入ソート 昇順 2018.2.3
//O(N^2) 挿入ソートはある程度整列されたデータに対しては高速
#include <iostream>
using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)


//配列の要素を順番に出力
void trace (int A[],int N){
  int i;
  for(i = 0; i<N; i++){
      if(i>0) cout << " ";
      cout << A[i];
  }
  cout << endl;
}

//挿入ソート
void insertionSort(int A[],int N){
    int j,i,v;
    for(i=1; i<N; i++){
        v=A[i];
        j=i-1;
        while(j >= 0 && A[j] > v){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = v;
        trace(A,N);
    } //forの終わり
}

int main(){
    int N,i,j;
    int A[100];

    cin >> N;
    for(i = 0; i < N; i++){cin >> A[i];}

    trace(A,N);
    insertionSort(A,N);

	return 0;
}
