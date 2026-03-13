#include<bits/stdc++.h>
using namespace std;
bool subsequenceOrNot(string s1,string s2){
    int i = 0;
    int j = 0;
    while(i<s1.size() && j<s2.size()){
        if(s1[i]==s2[j]){
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    return i==s1.size();
}
int main(){
    string s1 = "ahbgdc";
    string s2 = "abc";
    if(subsequenceOrNot(s1, s2)){
        cout<<"s1 is a subsequence of s2"<<endl;
    }
    else{
        cout<<"s1 is not a subsequence of s2"<<endl;
    }
    return 0;
}