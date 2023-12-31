#include <iostream>
using namespace std;
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int a[], int low, int high){
    int pivot = a[high];
    int i = low-1;
    for(int j = low; j<high; j++){
        if(a[j] < pivot){
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i+1], &a[high]);
    return i+1;
}
void quickSort(int a[], int low, int high){
    if(low<high){
        int pi = partition(a, low, high);
        quickSort(a, low, pi-1);
        quickSort(a, pi+1, high);
    }
}
int main(){
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i<n; i++){
        int a;
        cin >> a;
        arr[i] = a;
    }
    quickSort(arr, 0, n-1);
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}