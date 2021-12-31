#include <bits/stdc++.h>
using namespace std;

void reverse(string s, int n){
    string str="";
    vector<string> g1;

    for (int i = 0;i<n;i++){
        if (s[i] == '.'){
            g1.push_back(str);
            g1.push_back(".");
            str = "";
        }
        else{
            str+=s[i];
        }
    }
    g1.push_back(str);

    for (auto it = g1.end(); it != (g1.begin()-1); it--)
        cout << *it;
    cout << endl;
}

int main() {
    string s = "i.like.this.program.very.much";
    int n = s.size();
    reverse(s,n);
    return 0;
}