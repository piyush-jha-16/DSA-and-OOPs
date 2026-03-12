#include<bits/stdc++.h>
using namespace std;
int removeDuplicate(vector<int> &arr){
    int i=0;
    for(int j=1;j<arr.size();j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}

vector<int> unionOfArray(vector<int> &nums1,vector<int> &nums2){
    int i=0,j=0;
    vector<int> ans;
    while(i<nums1.size() && j<nums2.size()){
        if(nums1[i]<nums2[j]){
            ans.push_back(nums1[i]);
            i++;
        }
        else if(nums1[i]>nums2[j]){
            ans.push_back(nums2[j]);
            j++;
        }
        else{
            if(ans.size()==0 || ans.back()!=nums1[i]){
                ans.push_back(nums1[i]);
            }
            i++;
            j++;
        }
    }
    while(i<nums1.size()){
        ans.push_back(nums1[i]);
        i++;
    }
    while(j<nums2.size()){
        ans.push_back(nums2[j]);
        j++;
    }
    ans.resize(removeDuplicate(ans));
    return ans;
}
int main(){
    vector<int> nums1 = {1, 4, 4, 6, 7};
    vector<int> nums2 = {4};
    vector<int> ans = unionOfArray(nums1,nums2);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}