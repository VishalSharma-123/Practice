#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--){

        int N, column, middle, row;
        cin >> N;

        int a = round(pow(N, 0.5));

        if ((N<= a*a) and (N>= (a-1)*(a-1))){
            column = a;
            middle = ((a-1)*(a-1) + a*a + 1)/2;
        }

        else if ((N>= a*a) and (N<= (a+1)*(a+1))){
            column = a+1;
            middle = ((a+1)*(a+1) + a*a + 1)/2;
        }

        if (N<= middle){
            row = column - middle + N;
            cout << row << " " << column << endl;
        }

        else if (N > middle){
            row = column + middle - N;
            cout << column << " " << row << endl;
        }
    }

    return 0;
}