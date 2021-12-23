#include <bits/stdc++.h>
using namespace std;

int sum (int arr[], int n){
    int max_so_far = INT_MIN;
    int max = 0;
    
    for (int i = 0; i<n; i++){
        max = max + arr[i];
        if (max > max_so_far){
            max_so_far = max;
        }

        if (max < 0){
            max = 0;
        }
    }

    return max_so_far;
}

int main() {
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a)/sizeof(a[0]);

    int max = sum(a,n);
    cout << max << endl;
    return 0;
}
