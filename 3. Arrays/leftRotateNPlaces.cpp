#include<bits/stdc++.h>
using namespace std;
int reverse(int low,int high,vector<int> &arr){
    while(low<high){
        swap(arr[low],arr[high]);
        low++;
        high--;
    }
}
void leftRotateByNPlace(vector<int> &arr,int d){
    int n = arr.size();
    d = d%n;
    reverse(0,d-1,arr);
    reverse(d,n-1,arr);
    reverse(0,n-1,arr);
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int d = 2;
    leftRotateByNPlace(arr,d);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}