#include <bits/stdc++.h>
using namespace std;

void leader(int arr[], int n){

    vector<int> v1;
    int i = n-2, max = arr[n-1];
    v1.push_back(arr[n-1]);

    while (i >= 0){
        if (max < arr[i]){
            max = arr[i];
            v1.push_back(max);
        }
        i--;
    }

    for (auto it = v1.begin(); it != v1.end(); it++)
        cout << *it << " ";
    cout << endl;

}

int main() {
    int a[] = {1,2,3,4,0};
    int n = sizeof(a)/sizeof(a[0]);
    leader(a,n);
    return 0;
}