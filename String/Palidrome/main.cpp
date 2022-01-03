#include <bits/stdc++.h>
using namespace std;

void palindrome(string s, int n){
    int maxlength = 1, maxlength2 = 1;
    int start = 0, end = 0;
    int start1 = 0, end1 = 0;


    int low, high;
    for (int i = 1; i<n-1; i++){
        low = i-1, high = i+1;
        while (low>=0 && high<n && s[low] == s[high]){
            if (high - low + 1>maxlength){
                start = low;
                end = high;
                maxlength=end-start+1;
            }
            low = low - 1;
            high = high + 1;
        }
    }

    for (int i = 1; i<n; i++){
        low = i-1, high = i;
        while (low>=0 && high<n && s[low] == s[high]){
            if (high - low + 1>maxlength2){
                start1 = low;
                end1 = high;
                maxlength2 = end1-start1+1;
            }
            low = low - 1;
            high = high + 1;
        }
    }

    if (maxlength2 > maxlength){
        for(int i = start1; i<=end1; i++){
            cout << s[i];
        }
    }
    else{
        for(int i = start; i<=end; i++){
            cout << s[i];
        }
    }
    cout << endl;
}

int main() {
    string s = "abc";
    int n = s.size();
    palindrome(s,n);
    return 0;
}

// odd 

// ek centre hoga
// left and right mein comparison hoga 