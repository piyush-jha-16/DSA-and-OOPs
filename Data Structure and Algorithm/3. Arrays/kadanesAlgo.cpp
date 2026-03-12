#include<bits/stdc++.h>
using namespace std;
int kadanesALgo(vector<int> &arr){
    int maxSum = 0;
    int sum = 0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        maxSum = max(maxSum,sum);
        if(sum<0) sum = 0;
    }
    return maxSum;
}
int main(){
    vector<int> arr = {-2,1,-3,4,-1,2,1,-5,4};
    cout<<kadanesALgo(arr);
    return 0;
}