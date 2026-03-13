#include<bits/stdc++.h>
using namespace std;
vector<int> arrangeElementInSignOrder(vector<int> &arr){
    int n = arr.size();
    vector<int> result;
    int posIndex = 0;
    int negIndex = 1;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            if(posIndex<n) result.push_back(arr[i]);
            posIndex+=2;
        }
        else{
            if(negIndex<n) result.push_back(arr[i]);
            negIndex+=2;
        }
    }
    return result;
}
int main(){
    vector<int> arr = {-1,-1,1,1,1,1};
    arr = arrangeElementInSignOrder(arr);
    cout<<"Array after arranging in sign order: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}