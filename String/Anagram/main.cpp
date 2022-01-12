#include <bits/stdc++.h>
using namespace std;

void anagram (string s1, string s2, int n1, int n2){
    int arr1[256] = {0}, arr2[256]={0}, a;

    if (n1!=n2){
        cout << "Not an Anagram" << endl;
    }
    else{
        for (int i =0; i<n1; i++){
            a = (int) s1[i];
            arr1[a-1] += 1;
            a = (int) s2[i];
            arr2[a-1] += 1;
        }

        for (int i = 0; i<256; i++){
            if (arr1[i]!=arr2[i]){
                cout << "Not and anagram" << endl;
                break;
            }
        }
        cout << "They are an anagram" << endl;
    }

}


int main() {
    string s1 = "geeksforgeeks", s2 = "forgeeksgeeks";
    int n1 = s1.size(), n2 = s2.size();
    anagram(s1,s2,n1,n2);
    return 0;
}