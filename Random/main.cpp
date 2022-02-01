#include <bits/stdc++.h>
using namespace std;

unordered_map<char, int> umap;

void frequency(string s, int n){
    for (int i = 0; i<n; i++){
        umap[s[i]] += 1;
    }
}

void letters(){
    string s = "";
    for (auto itr:umap){
        if (itr.second == 1){
            s += itr.first;
        }
        if (itr.second == 2){
            s += itr.first;
            s += itr.first;
        }
    }

    cout << s << endl;
    umap.clear();
}
int main() {
    string s1;
    int n, t;
    cin >> t;
    while (t--){
        cin >> s1;
        n = s1.length();
        frequency(s1,n);
        letters();
    }
    return 0;
}
