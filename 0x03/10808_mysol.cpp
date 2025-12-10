#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    string input;
    cin >> input;
    int a[30]={};
    for(int i=0; i<input.size(); i++){
        a[input[i]-'a']++;
    }
    for(int i=0; i<26; i++){
        cout << a[i] << ' ';
    }

}