#include <bits/stdc++.h>
using namespace std;

int subList(int arr[], int n, int sum){

    int current = arr[0], start = 0, i;

    for (i = 1; i<=n; i++){
        while (current >sum && start < i-1){
            current = current - arr[start];
            start++;
        }
        if (current == sum){
            cout << start << " " << i-1;
            return 1;
        }

        if (i<n){
            current += arr[i];
        }
        
    }

    cout << "Nothing";
    return 0;


}


int main() {
    int arr[] = {15,2,4,8,9,5,10,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 23;
    subList(arr,n,sum);
    return 0;
}
