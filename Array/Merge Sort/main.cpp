#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int const left, int const mid, int const right){

    auto const sub_left = mid - left + 1;
    auto const sub_right = right - mid;

    auto *arr_left = new int[sub_left],
         *arr_right = new int[sub_right];

    for (auto i = 0; i<sub_left; i++){
        arr_left[i] = arr[left + i];
    }
    for (auto j = 0; j<sub_right; j++){
        arr_right[j] = arr[mid + j+ 1];
    }

    auto left_index = 0, right_index = 0;
    int k = left;

    while (left_index < sub_left && right_index<sub_right){
        if (arr_left[left_index] <= arr_right[right_index]){
            arr[k] = arr_left[left_index];
            left_index++;
        }
        else{
            arr[k] = arr_right[right_index];
            right_index++;
        }
        k++;
    }

    while(left_index < sub_left){
        arr[k] = arr_left[left_index];
        left_index++;
        k++;
    }

    while(right_index < sub_right){
        arr[k] = arr_right[right_index];
        right_index++;
        k++;
    }
}

void mergeSort(int arr[], int const begin, int const end){
    if (begin >= end){
        return;
    }

    auto mid = begin + (end-begin)/2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, begin, mid, end);
}

void printArray(int arr[], int n){
    for(auto i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {12,11,13,5,6,7};
    int N = sizeof(arr)/sizeof(arr[1]);
    mergeSort(arr, 0, N-1);
    printArray(arr, N);
    return 0;
}
