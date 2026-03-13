#include<bits/stdc++.h>
using namespace std;
void twoSum(vector<int> &arr,int target){
    unordered_map<int,int> mp;
    for(int i=0;i<arr.size();i++){
        int second = target-arr[i];
        if(mp.find(second)!=mp.end()){
            cout<<"Pair found: "<<arr[i]<<" "<<second<<endl;
            return;
        }
        mp.insert({arr[i],i});
    }
    cout<<"No pair found"<<endl;
}
int main(){
    vector<int> arr = {2,7,11,15};
    int target = 9;
    twoSum(arr,target);
    return 0;
}