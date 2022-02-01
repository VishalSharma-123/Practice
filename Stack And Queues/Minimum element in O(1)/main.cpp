#include <bits/stdc++.h>
using namespace std;

stack<int> s1;
int minimum;

void push_elements(int n);
void get_min();

void choice(int n){
    int i;
    if (n == 1){
        cout << "Enter data to be pushed: ";
        cin >> i;
        push_elements(i);
    }

    else if (n==2){
        get_min();
    }
}

void push_elements(int n){
    int temp;
    if (s1.empty()){
        minimum = n;
    }

    else{
        if (minimum > n){
            temp = minimum;
            minimum = n;
            n = temp;
        }
    }
    s1.push(n);
}

void get_min(){
    cout << "Minimum element uptill now is: " << minimum << endl;
}


int main() {
    int t, x;
    cin >> t;
    cout << "Enter 1 for push, 2 for minimum";
    while (t--){
        cin >> x;
        choice(x);
    }
    return 0;
}

