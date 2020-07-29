#include <iostream>
#include <bits/stdc++.h>
#include <array>
using namespace std;

int indexPos(int arr[], int key, int n){ // linear search for the index
int idx = -1;
for(int i=n-1;i>=0;i--){
        if(arr[i]< key){
            idx = i+1;
            break;
        }
    }
    return idx;

}

int main(){
    int arr[] = {9,10,12,13,14,15,16,17};
    int idx, i, n, key = 11;
    int temp;
    n = sizeof(arr)/sizeof(arr[0]);
    idx = indexPos(arr, key, n); // finding index of key

    
    for(int i=n+1;i>idx;i--){ // shifting array and inserting element on index
        temp = arr[i-1];
        arr[i]=temp;
        arr[i-1] = key; 
    }

    for(i=0;i<n+1;++i){
        cout<<arr[i]<<" ";
    }
    
return 0;
}