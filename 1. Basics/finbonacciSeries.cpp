#include<bits/stdc++.h>
using namespace std;
void fibbonacciSeries(int n){
    int a =0;
    int b=1;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        int next = a+b;
        a=b;
        b=next;
    }
}
int main(){
    int n;
    cout<<"Enter the number of terms in fibbonacci series: ";
    cin>>n;
    fibbonacciSeries(n);
    return 0;
}