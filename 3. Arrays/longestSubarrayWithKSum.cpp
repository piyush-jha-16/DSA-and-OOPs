#include<bits/stdc++.h>
using namespace std;
int longestSubarrayWithKSum(vector<int> &nums,int k){
    int sum = nums[0];
    int maxLen = 0;
    int right = 0;
    int left = 0;
    int n =nums.size();
    while(right<n){
        if(sum==k) maxLen = max(maxLen,right-left+1);
        if(sum>k){
            sum-=nums[left];
            left++;
        }
        else{
            right++;
            if(right<n) sum+=nums[right];
        }
    }
    return maxLen;
}
int main(){
    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;
    cout<<longestSubarrayWithKSum(nums,k);
    return 0;
}