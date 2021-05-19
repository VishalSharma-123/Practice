#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    int arr[N][N];
    int i=0,j;
    while (i<N){
        j=0;
        while (j<N){
            cin >> arr[i][j];
            j+=1;
        }
        i+=1;
    }

    int m = N;
    int r=0, c=0;
    
    while (r<=(N/2)){
        for (int a = r; a<m; a++){
            printf("%d",arr[r][a]);
        }

        for (int a=c+1; a<m; a++){
            printf("%d",arr[a][m-1]);
        }

        for (int a = m-1; a>=r; a--){
            printf("%d",arr[m-1][a]);
        }

        for (int a = m-2; a>r; a--){
            printf("%d",arr[a][m-2]);
        }

        r+=1;
        c+=1;
        m-=1;
    }
    return 0;
}