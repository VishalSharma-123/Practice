#include <bits/stdc++.h>
using namespace std;

int value(char s){
    if (s=='I'){
        return 1;
    }
    else if (s == 'V'){
        return 5;
    }
    else if (s == 'X'){
        return 10;
    }
    else if (s == 'L'){
        return 50;
    }
    else if (s == 'C'){
        return 100;
    }
    else if (s == 'D'){
        return 500;
    }
    else if (s == 'M'){
        return 1000;
    }
    else{
        return -1;
    }
}

void roman(string s, int n){
    int sum = 0, i = n-1;
    char str;
    int value1 = 0, value2 = 0;

    while (i>=0){
        str = s[i];
        value1 = value(str);
        if (value1 >=value2){
            sum+= value1;
        }
        else{
            sum -= value1;
        }
        value2 = value1;
        i--;
    }
    cout << sum << endl;
}

int main() {
    string s = "MMMCMXCIX";
    int n = s.size();
    roman(s,n);
    return 0;
}