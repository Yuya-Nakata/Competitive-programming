///2018.2.9
//

include<iostream>

void merge_sort_rec(int* array, int begin, int end, int* work){
  int mid;

  //要素が一つしかなければ終了
  mid = (begin + end) / 2;
  merge_sort_rec(array,begin,mid,work);
  merge_sort_rec(array,mid+1,end,work);

  //マージ
  merge(array,begin,end,mid,work);
}

//マージ

void merge(int* array, int begin, int end, int mid, int* work){

  int i,j,k;

  //前半の要素を作業用配列へ
  for(i = begin; i <= mid; ++i){
    work[i] = array[i];
  }

  //後半の要素を逆順に作業用配列へ
  for(i = mid+1; j = end; i <= end; ++i, --j){
    work[i] = array[j];
  }


  //作業用配列の両端から取り出した要素をマージ
  i = begin;
  j = end;
  for(k = begin; k<= end; ++k){
    //昇順にソートするので，小さい方の要素を結果の配列へ移す
    if( word[i] <= work[j] ) {// == の場合は先頭を優先すると安定のソートとなる
      array[k] = work[i];
      i++;
    }
    else{
      array[k] =work[j];
      j--;
    }
   }

 }

int main(void){
  int work[100];

merge_sort_rec(array, 0,size-1,work);

}
