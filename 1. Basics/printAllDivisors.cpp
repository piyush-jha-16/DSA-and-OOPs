#include<bits/stdc++.h>
using namespace std;
void printAllDivisors(int n){
    for(int i=1; i<=n; i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"All divisors of "<<n<<" are: ";
    printAllDivisors(n);
    cout<<endl;
    return 0;
}