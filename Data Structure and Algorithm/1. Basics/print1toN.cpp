#include<bits/stdc++.h>
using namespace std;
void printNumber(int n){
    if(n==0) return;
    printNumber(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Numbers from 1 to "<<n<<" are: ";
    printNumber(n);
    cout<<endl;
    return 0;
}