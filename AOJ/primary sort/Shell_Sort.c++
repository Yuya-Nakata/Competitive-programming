//シェルソート 昇順 2018.2.4
//O(N^1.25)~ O(N^1.5) 安定でない　
//クイックソートが発見されるまで最速だった
//h-sortの値は1,4,13,40と増えていく
//AOJではなくアルゴリズムとデータ構造を参考
#include <iostream>
using namespace std;

#define REP(i,n) for(int i = 0; i < (int)(n); ++i)

int main(){
    int A[100],n,i,min,j,t,h;
    cin >> n;
    REP(i,n){
        cin >> A[i];
    }

    //shellsort
    for(h=1; h < n/9; h=h*3+1){
        ;
    }
    for(; h>0; h /= 3){
        //cout<< "hの値： "<< h <<endl;
        for(i = h; i<n; i++){
            j=i;
            while(j >= h && A[j-h] > A[j]){
                t = A[j]; A[j] = A[j-h]; A[j-h] = t;
                j -= h;
            }
        }
    }



    REP(i,n){
    cout << A[i];
    }

    return 0;
}
