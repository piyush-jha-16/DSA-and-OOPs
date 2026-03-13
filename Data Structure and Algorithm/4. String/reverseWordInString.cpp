#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int start,int end){
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
}
void reverseWordInString(string &s){
    int start = 0;
    for(int i=0;i<s.size();i++){
        if(s[i]==' '){
            reverse(s,start,i-1);
            start = i+1;
        }
    }
    reverse(s,start,s.size()-1);
    reverse(s,0,s.size()-1);
}
int main(){
    string s = "Hello World";
    reverseWordInString(s);
    cout<<s;
    return 0;
}