class Solution {
public:
    // void swap(int *a, int *b){
    //     int t = *a;
    //     *a = *b;
    //     *b = t;
    // }
    // int partition(vector<int>& arr, int low, int high){
    //     int pivot = arr[high];
    //     int i = low -1;
    //     for(int j = low; j < high; j++){
    //         if(arr[j] < pivot){
    //             i++;
    //             swap(&arr[i], &arr[j]);
    //         }
    //     }
    //     swap(&arr[i+1], &arr[high]);
    //     return (i+1);
    // }
    // void quickSort(vector<int>& arr, int low, int high){
    //     if(low<high){
    //         int pi = partition(arr, low, high);
    //         quickSort(arr, low, pi-1);
    //         quickSort(arr, pi+1, high);
    //     }
    // }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() == 0 && nums2.size() == 0){
            return 0.0;
        }
        vector <int> store;
        int i = 0, j = 0;
        while(i <nums1.size() && j < nums2.size()){
            if(nums1[i] <= nums2[j]){
                store.push_back(nums1[i]);
                ++i;
            }else{
                store.push_back(nums2[j]);
                ++j;
            }
        }
        while(i < nums1.size()){
            store.push_back(nums1[i]);
            ++i;
        }
        while(j<nums2.size()){
            store.push_back(nums2[j]);
            ++j;
        }
        // if(nums1.size() >= nums2.size()){
        //     for(int i = 0; i<nums1.size();i++){
        //         store.push_back(nums1[i]);
        //         if(i < nums2.size()) store.push_back(nums2[i]);
        //     }
        // }else{
        //     for(int i = 0; i<nums2.size();i++){
        //         store.push_back(nums2[i]);
        //         if(i < nums1.size()) store.push_back(nums1[i]);
        //     }
        // }
        // quickSort(store, 0, store.size()-1);
        int val = store.size()/2;
        if(store.size() & 1){
            return double(store[val]);
        }else{
            double temp = double(store[val]) + double(store[val-1]);
            temp = temp/2;
            return temp;
        }
    }
};