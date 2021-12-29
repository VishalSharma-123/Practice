#include <bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n, int k){
    int i = 0;
    vector<int> g1;
    int N = n/k, M = k-1;
    N = N*k;
    while (i<N){
        if (i%k == 0){
            while(M>=0){
                g1.push_back(arr[i+M]);
                M--;
            }
            M = k-1;
        }
        i+=k;
    }

    M = n- N - 1;
    while (M>=0){
        g1.push_back(arr[N+M]);
        M--;
    }


    for (auto it = g1.begin(); it != g1.end(); it++)
        cout << *it << " ";
}

int main() {
    int a[] = {1,2,3,4,5};
    int k = 3;
    int n = sizeof(a)/sizeof(a[0]);
    reverse(a,n,k);
    return 0;
}