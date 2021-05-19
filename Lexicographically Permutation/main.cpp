#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin >> T;
    while (T--){
        int N, odd=0;
        cin >> N;
        if (N&1){
            odd = 1;
            N = N-3;
        }

        int i=1;
        while (i<N){
            cout << i+1 << " " << i << " ";
            i+=2;
        }

        if (odd){
            cout << N+2 << " " << N+3 << " " << N+1 << " ";
        }
        cout << endl;
    }
    return 0;
}


//For Lexicographicall smaller no
// For two permutations p and q, we say that p is lexicographically smaller 
// than q if and only if there exists a index 1 ≤ l ≤ n such that:

// For any 1 ≤ i < l, pi = qi. Note that if l = 1, this constraint means nothing.
// and, pl < ql.

// logic:
// if input is even, swap integers with pair of two
//like (1,2,3,4,5,6) will become (2,1,4,3,6,5)

// if input is odd, swap integers upto N-3 places
// after that swap places in order N-1, N, N-2
//like (1,2,3,4,5) will become (2,1)
//after that it will become (2,1,4,5,3)