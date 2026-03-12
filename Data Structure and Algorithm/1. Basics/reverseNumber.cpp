#include<bits/stdc++.h>
using namespace std;
int reverseNumber(int n){
    int reverse = 0;
    while(n>0){
        int digit = n%10;
        reverse = reverse*10+digit;
        n=n/10;
    }
    return reverse;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Reverse of "<<n<<" is "<<reverseNumber(n)<<endl;
    return 0;
}