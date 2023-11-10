#include <iostream>
using namespace std;
void merge(int arr[], int low, int mid, int high){
  int n1 = mid-low+1;
  int n2 = high-mid;
  int l[n1], r[n2];
  for(int i = 0; i<n1; i++){
    l[i] = arr[low+i];
  }
  for(int i = 0; i<n2;i++){
    r[i] = arr[mid+1+i];
  }
  int i = 0, j= 0, k = low;
  while(i<n1 && j < n2){
    if(l[i] <= r[j]){
      arr[k] = l[i];
      i++;
    }else{
      arr[k] = r[j];
      j++;
    }
    k++;
  }
  while(i<n1){
    arr[k] = l[i];
    i++;
    k++;
  }
  while(j<n2){
    arr[k] = r[j];
    j++;
    k++;
  }
}
void mergeSort(int arr[], int l, int h){
  if(l<h){
    int m = l + (h-l)/2;
    mergeSort(arr, l, m);
    mergeSort(arr, m+1, h);
    merge(arr, l, m, h);
  }
}
void printArray(int arr[], int n){
  for(int i = 0; i<n; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
}
int main(){
  int arr[] = {35, 45, 22, 11, 55, 68, 25, 6, 45, 85, 125, 23};
  int size = sizeof(arr)/sizeof(arr[0]);
  printArray(arr, size);
  mergeSort(arr, 0, size-1);
  printArray(arr, size);
}