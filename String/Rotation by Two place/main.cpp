#include <bits/stdc++.h>
using namespace std;

void rotation(string s1, string s2, int n1, int n2){
    if (n1 != n2){
        cout << "False";
    }
    else {
        if ((s2.substr(n2-2,n2-1)+s2.substr(0,n2-2)) == s1){
            cout << "Anticlocwise rotated";
        }
        else if ((s2.substr(2,n2) + s2.substr(0,2)) == s1){
            cout << "Clockwise rotated";
        }
        else{
            cout << "False";
        }
    }

    cout <<endl;
}

int main() {
    string s1 = "geeksforgeeks", s2 = "geeksgeeksor";
    int n1 = s1.size(), n2 = s2.size();
    rotation(s1,s2,n1,n2);
    return 0;
}