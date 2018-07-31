//2017.2.4

#include <cstdio>
#include<iostream>
using namespace std;

int binarySeaech(int A[], int key, int n){
    int left = 0;
    int right = n;
    int mid;
    while(left < right){
        mid =(left +right) /2;
        if(key == A[mid]) return mid;
        else if(key < A[mid]) right = mid;
        else left = mid + 1;
    }
    return -1;
}

int main(){
    int n, a[10],key;
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    cin  >> key;
    cout << binarySeaech(a, key , n)+1 ;
}
