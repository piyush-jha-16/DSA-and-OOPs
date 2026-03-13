#include<bits/stdc++.h>
using namespace std;
vector<int> leaderInArray(vector<int> &arr){
    int n = arr.size();
    vector<int> leaders;
    int rightMax = arr[n-1];
    leaders.push_back(rightMax);
    for(int i=n-2;i>=0;i--){
        if(arr[i]>rightMax){
            leaders.push_back(arr[i]);
            rightMax = arr[i];
        }
    }
    reverse(leaders.begin(),leaders.end());
    return leaders;
}
int main(){
    vector<int> arr = {16,17,4,3,5,2};
    vector<int> leaders = leaderInArray(arr);
    cout<<"Leaders in the array: ";
    for(int i=0;i<leaders.size();i++){
        cout<<leaders[i]<<" ";
    }
    return 0;
}