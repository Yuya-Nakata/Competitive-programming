//挿入ソート 昇順 2018.2.3
//O(N^2) 交換回数　＝反転数、転倒数 swで列の乱れを表す
#include <iostream>
using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

//flagを用いたバブルソート
int bubbleSort(int A[],int N){
    int sw = 0;
    bool flag =1;
    for (int i=0; flag; i++){
        flag = 0;
        for(int j = N-1; j >= i+1; j--){
            if(A[j] < A[j-1]){
                //隣接要素の交換
                swap(A[j],A[j-1]);
                flag = 1;
                sw++;
            }
        }
    }
    return sw;
}

int main(){
    int A[100], N,sw;
    cin >>N;
    REP(i,N){ cin >> A[i]; }
    sw = bubbleSort(A,N);
    REP(i,N){
        if(i) cout << " ";
        cout << A[i];
    }

    cout << endl << sw;

    return 0;
}
