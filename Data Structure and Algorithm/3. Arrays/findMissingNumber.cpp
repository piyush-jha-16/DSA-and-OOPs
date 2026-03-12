#include<bits/stdc++.h>
using namespace std;
int missingNumber(vector<int> &arr){
    int n = arr.size()+1;
    int sum = (n*(n+1))/2;
    int arrSum = 0;
    for(int i=0;i<arr.size();i++){
        arrSum += arr[i];
    }
    return abs(sum-arrSum);
}
int main(){
    vector<int> arr = {1,2,3,5};
    cout<<missingNumber(arr);
    return 0;
}