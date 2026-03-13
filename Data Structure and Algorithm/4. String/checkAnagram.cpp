#include<bits/stdc++.h>
using namespace std;
bool checkAnagram(string s1,string s2){
    if(s1.size()!=s2.size()) return false;
    int arr[26] = {0};
    for(int i=0;i<s1.size();i++){
        arr[s1[i]-'a']++;
        arr[s2[i]-'a']--;
    }
    for(int i=0;i<26;i++){
        if(arr[i]!=0) return false;
    }
    return true;
}
int main(){
    string s1 = "listen";
    string s2 = "silent";
    if(checkAnagram(s1, s2)){
        cout<<"s1 and s2 are anagrams"<<endl;
    }
    else{
        cout<<"s1 and s2 are not anagrams"<<endl;
    }
    return 0;
}   