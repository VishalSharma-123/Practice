#include <bits/stdc++.h>
using namespace std;

bool search(int sum, int start, int end, int arr[]){

    while (start <= end){
        int mid = (end + start)/2;
        if (arr[mid] == sum){
            return true;
        }
        else if (arr[mid] > sum){
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return false;
}

int triplets (int arr[], int n){

    sort(arr, arr+n);
    int count = 0;

    for (int i = 0; i<n; i++){
        for (int j = i+1; j<n; j++){
            if (search(arr[i]+arr[j], j, n-1, arr)){
                cout << arr[i] << " " << arr[j] << endl;
                count ++;
            }
        }
    }
    return count;
}


int main() {
    int arr[] = { 5, 32, 1, 7, 10, 50, 19, 21, 2 };
    int n = sizeof(arr)/sizeof(arr[1]);
    int a = triplets(arr, n);
    cout << a;
    return 0;
}
