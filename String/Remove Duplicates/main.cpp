#include <bits/stdc++.h>
using namespace std;

void duplicate(string s1, int n){
    int arr[256] = {0};
    int value;
    string s="";

    for (int i =0; i<n; i++){
        value = (int) s1[i];
        if (arr[value-1] == 0){
            s+=s1[i];
            arr[value-1] += 1;
        }
    }

    cout << s << endl;;

}

int main() {
    string s = "geekforgeeks";
    int n = s.size();
    duplicate(s,n);
    return 0;
}