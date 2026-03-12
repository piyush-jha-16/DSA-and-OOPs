#include<bits/stdc++.h>
using namespace std;
int maxConsecutiveOnes(vector<int> &arr){
    int count = 0;
    int maxCount = 0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==1){
            count++;
        }
        else{
            maxCount = max(maxCount,count);
            count = 0;
        }
    }
    return max(maxCount,count);
}
int main(){
    vector<int> arr = {1,1,1,1,1};
    cout<<maxConsecutiveOnes(arr);
    return 0;
}
