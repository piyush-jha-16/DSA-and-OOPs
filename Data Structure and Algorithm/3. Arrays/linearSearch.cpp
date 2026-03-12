#include<bits/stdc++.h>
using namespace std;
bool linearSearch(vector<int> &arr,int key){
    for(int i=0;i<arr.size();i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    vector<int> arr = {1,2,3,4,5};
    int key = 3;
    cout<<linearSearch(arr,key);
    return 0;
}