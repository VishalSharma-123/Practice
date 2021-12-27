#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int left, int mid, int right){

    int sub_left = mid - left + 1, sub_right = right-mid;

    int arr_left[sub_left], arr_right[sub_right];
    for (int i = 0; i<sub_left; i++){
        arr_left[i] = arr[i];
    }
    for (int j = 0; j<sub_right; j++){
        arr_right[j] = arr[mid + j+ 1];
    }

    int left_index = 0, right_index = 0, k = left;
    while (left_index < sub_left && right_index<sub_right){
        if (arr_left[left_index] < arr_right[right_index]){
            arr[k] = arr_left[left_index];
            left_index++;
            k++;
        }
        else{
            arr[k] = arr_left[right_index];
            right_index++;
            k++;
        }
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

void mergeSort(int arr[], int begin, int end){
    if (begin > end){
        return;
    }

    int mid = begin + (end-begin)/2;
    mergeSort(arr, begin, mid);
    mergeSort(arr, mid+1, end);
    merge(arr, begin, mid, end);
}

void printArray(int arr[], int n){
    for(int i = 0; i<n; i++){
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
