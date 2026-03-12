#include<iostream>
#include<vector>
using namespace std;
void reverseArray(vector<int> &nums){
    int first = 0;
    int last = nums.size()-1;
    while(first<=last){
        swap(nums[first],nums[last]);
        first++;
        last--;
    }
}
int main(){
    vector<int> nums = {1,2,3,4,5};
    reverseArray(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}