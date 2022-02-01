#include <bits/stdc++.h>
using namespace std;

stack<int> s1;
stack<int> s2;

void print(){
    int x;
    while (s1.empty() == false){
        x = s1.top();
        s1.pop();
        s2.push(x);
    }

    while (s2.empty() == false){
        cout << s2.top() << " ";
        s2.pop();
    }
}

void push_element(int n){
    s1.push(n);
}

void pop_element(){
    int x;
    while (s1.empty() == false){
        x = s1.top();
        s1.pop();
        s2.push(x);
    }

    cout << "Popped element is: " << s2.top() << endl;
    s2.pop();
    while (s2.empty() == false){
        x = s2.top();
        s2.pop();
        s1.push(x);
    }
}

void choice (int n){
    if (n == 1){
        int x;
        cout << "Enter data: ";
        cin >> x;
        push_element(x);
    }

    else if (n == 2){
        pop_element();
    }
}



int main() {
    int t;
    cin >> t;
    int i;
    while (t--){
        cout << "Enter your choice: ";
        cin >> i;
        choice(i);
    }
    print();
    cout << endl;
    return 0;
}

