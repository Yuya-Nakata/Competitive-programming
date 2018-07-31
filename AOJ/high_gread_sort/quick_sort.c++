//2018.2.10
//クイックソート

#include <iostream>
using namespace std;

void QuickSort(int array[], int begin, int end)
{
 int i = begin;
 int j = end;
 int pivot;
 int temp;

 pivot = array[ ( begin + end ) / 2 ];  // 中央の値をpivotにする

 while( 1 )
 {
  while( array[i] < pivot ){ ++i; }  /* 枢軸以上の値が見つかるまで右方向へ進めていく */
  while( array[j] > pivot ){ --j; }  /* 枢軸以下の値が見つかるまで左方向へ進めていく */
  if( i >= j )break;  // 軸がぶつかったらソート終了

  // 入れ替え
  temp = array[i];
  array[i] = array[j];
  array[j] = temp;
  i++;
  j--;
 }

 // 軸の左側をソートする
 if( begin < i - 1 ){ QuickSort( array, begin, i - 1 ); }
 // 軸の右側をソートする
 if( j + 1 < end ){ QuickSort( array, j + 1, end ); }
}

int main(void){
    int A[10], n;
    cin >> n;
   for(int i=0; i<n; i++) cin >> A[i];
    QuickSort(A, 0, n-1);
    for(int i=0; i<n; i++) cout << A[i];

}
