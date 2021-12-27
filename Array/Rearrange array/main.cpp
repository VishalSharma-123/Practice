#include <bits/stdc++.h>
using namespace std;

void rearrange(int arr[], int n){
    vector<int> reverse;
    int N = n/2;
    for (int i =0; i<N; i++){
        if (n-i-1 == i){
            reverse.push_back(arr[i]);
        }
        else{
            reverse.push_back(arr[n-i-1]);
            reverse.push_back(arr[i]);
        }
    }

    for (auto it = reverse.begin(); it != reverse.end(); it++)
        cout << *it << " ";
}


int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,n);
    return 0;
}

