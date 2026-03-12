#include<bits/stdc++.h>
using namespace std;
int numberAppearingOnce(vector<int> &arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    vector<int> arr = {2,3,5,4,5,3,4};
    cout<<numberAppearingOnce(arr);
    return 0;
}