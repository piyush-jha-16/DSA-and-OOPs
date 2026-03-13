#include<bits/stdc++.h>
using namespace std;
void patternSearching(const string &s1, const string &s2){
    int n = s1.size();
    int m = s2.size();
    for(int i=0;i<=n-m;i++){
        int j ;
        for(j=0;j<m;j++){
            if(s1[i+j]!=s2[j]) break;
        }
        if(j==m) cout<<"Pattern found at index: "<<i<<endl;
    }
}
int main(){
    string s1 = "ABABDABDAB";
    string s2 = "ABD";
    patternSearching(s1, s2);
    return 0;
}