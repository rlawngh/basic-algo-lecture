#include <bits/stdc++.h>
using namespace std;

int func2(int arr[], int N){
    int b[101]={};
    for(int i=0; i<N; i++){
        if(b[100-arr[i]]>0) return 1;
        b[arr[i]]++;
    }

    return 0;
}

int main(){
    int arr[1001];
    arr[0]=4;
    arr[1]=13;
    arr[2]=63;
    arr[3]=87;

    int N=4;

    cout << func2(arr,N);

    return 0;
}