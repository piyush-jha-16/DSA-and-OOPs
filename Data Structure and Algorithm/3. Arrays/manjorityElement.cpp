#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int> &arr){
    int count =1;
    int element = arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]==element) count++;
        else count--;
        if(count==0){
            element = arr[i];
            count=1;
        }
    }
    int cnt = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==element) cnt++;
    }
    if(cnt>arr.size()/2) return element;
    return -1;
}
int main(){
    vector<int> arr = {2,2,1,1,1,2,2};
    cout<<majorityElement(arr);
    return 0;
}