#include<bits/stdc++.h>
using namespace std;
void naivePatternDistinct(string s1,string s2){
    int n = s1.size();
    int m = s2.size();
    for(int i=0;i<=n-m;){
        int j;
        for(j=0;j<m;j++){
            if(s1[i+j]!=s2[j]) break;
        }
        if(j==m) cout<<"Pattern found at index: "<<i<<endl;
        if(j==0) i++; // if first character is not matched then move to next character
        else i = i+j;
    }
}
int main(){
    string s1 = "ABABDABDAB";
    string s2 = "ABD";
    naivePatternDistinct(s1, s2);
    return 0;
}