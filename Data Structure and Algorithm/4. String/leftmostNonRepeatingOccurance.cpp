#include<bits/stdc++.h>
using namespace std;
int leftMostNonRepeatingOccurance(string s){
    int arr[256] = {0};
    for(int i=0;i<s.size();i++){
        arr[s[i]]++;
    }
    for(int i=0;i<s.size();i++){
        if(arr[s[i]]==1) return i;
    }
    return -1;
}
int main(){
    string s = "abccde";
    cout<<leftMostNonRepeatingOccurance(s);
    return 0;
}