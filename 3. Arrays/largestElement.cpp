#include<bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr){
    int largest = arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    return largest;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    cout<<largestElement(arr)<<endl;
    return 0;
}