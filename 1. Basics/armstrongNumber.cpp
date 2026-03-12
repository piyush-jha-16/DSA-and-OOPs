#include<bits/stdc++.h>
using namespace std;
int findigits(int n){
    int count = 0;
    while(n>0){
        count++;
        n=n/10;
    }
    return count;
}

bool armstrongNumber(int n){
    int original = n;
    int sum = 0;
    int noDigit = findigits(n);
    while(n>0){
        int digit = n%10;
        sum += pow(digit, noDigit);
        n=n/10;
    }
    return sum == original;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(armstrongNumber(n)){
        cout<<n<<" is an armstrong number"<<endl;
    }
    else{
        cout<<n<<" is not an armstrong number"<<endl;
    }
}