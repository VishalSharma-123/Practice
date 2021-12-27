#include <bits/stdc++.h>
using namespace std;

void equilibrium(int arr[], int n){
    int sum = 0, sum1 = 0;
    for(int i = 0; i<n; i++){
        sum += arr[i];
    }

    sum = sum-arr[0];
    for (int i = 1; i<n; i++){
        sum = sum - arr[i];
        sum1 += arr[i-1];
        if (sum == sum1){
            cout << "Position at index: "<< i+1 << endl;
            break;
        }
    }
}

int main() {
    int arr[] = {-7, 1, 5, 2, -4, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    equilibrium(arr,n);
    return 0;
}
