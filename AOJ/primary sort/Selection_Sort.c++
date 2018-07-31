//選択ソート 昇順 2018.2.3
//O(N^2) 安定でない
#include <iostream>
using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

int main(){
    int A[100],N,i,min,j,t;
    cin >> N;
    REP(i,N){
        cin >> A[i];
    }
    //選択ソート
    for(i=0; i<N-1; i++){
        min = i;
        for(j = i; j< N; j++){
            if(A[j] < A[min]) min = j;
        }
        t = A[i]; A[i] = A[min]; A[min] = t;
    }

    REP(i,N){
    cout << A[i];
    }

    return 0;
}
