#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    stack<char> s1;
    char x;

    for (int i = 0; i<s.length(); i++){
        if (s[i] == '{' || s[i] == '[' || s[i] == '('){
            s1.push(s[i]);
            continue;
        }
        
        if (s1.empty()){
            return false;
        }

        switch(s[i]){
            case ')':
                x = s1.top();
                s1.pop();
                if(x=='{' || x == '['){
                    return false;
                }
                break;

            case '}':
                x = s1.top();
                s1.pop();
                if(x=='(' || x == '['){
                    return false;
                }
                break;

            case ']':
                x = s1.top();
                s1.pop();
                if(x=='(' || x == '{'){
                    return false;
                }
                break;
        }
    }

    return (s1.empty());
}


int main() {
    string exp = "{[()]}";
    if (check(exp)){
        cout << "balanced\n";
    }
    else{
        cout << "unbalanced\n";
    }

    return 0;
}