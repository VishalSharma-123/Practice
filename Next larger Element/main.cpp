#include <bits/stdc++.h>
using namespace std;

void larger(int arr[], int n){
    stack<int> s1;
    s1.push(arr[0]);
    for (int i =1; i<n; i++){

        //case 1
        if (arr[i] > s1.top()){
            cout << s1.pop() << " ";
        }
        else{
            s1.push(arr[i]);
        }
    }

    if (!s1.empty()){
        cout << "-1 for the rest\n";
    }
    else{
        cout << -1 << endl;
    }
}


int main() {
    int arr[] = {1,3,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    larger(arr,n);
    return 0;
}