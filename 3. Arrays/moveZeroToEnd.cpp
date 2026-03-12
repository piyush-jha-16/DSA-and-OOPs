#include<bits/stdc++.h>
using namespace std;
void moveAllZeroToEnd(vector<int> &arr){
    int i = 0;
    for(int j=0;j<arr.size();j++){
        if(arr[j]==0) {i=j;break;}
    }
    for(int j=i+1;j<arr.size();j++){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
    }
}
int main(){
    vector<int> arr = {0,1,0,3,12};
    moveAllZeroToEnd(arr);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}