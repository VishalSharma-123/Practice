#include <bits/stdc++.h>
using namespace std;

int main(){
    int N,count=0;
    cin >> N;
    while (N--){
        string s;
        cin >> s;
        for (int i=0; i<s.length()-1; i++){
            string str=s.substr(i,2);
            if (str == "ch" || str == "he" || str == "ef"){
                count ++;
                break;
            }
        }
    }
    cout << count << endl;    
    return 0;
}