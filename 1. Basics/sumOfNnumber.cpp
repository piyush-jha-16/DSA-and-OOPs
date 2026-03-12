#include<bits/stdc++.h>
using namespace std;
int sumOfNnumber(int n){
    int sum = n*(n+1)/2;
    return sum;
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum of first "<<n<<" natural numbers is "<<sumOfNnumber(n)<<endl;
    return 0;
}