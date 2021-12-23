#include <bits/stdc++.h>
using namespace std;

int radix(int arr[], int n){

    int arr1[n];
    for (int i = 0; i<n; i++){
        arr1[arr[i] - 1] = 1;
    }

    for (int i = 0; i<n; i++){
        if (arr1[i] == 0){
            cout << i+1 << endl;
        }
    }
}

int main() {
    int arr[] = {1,2,3,5};
    int n = 5;
    radix(arr, n);
    return 0;
}
