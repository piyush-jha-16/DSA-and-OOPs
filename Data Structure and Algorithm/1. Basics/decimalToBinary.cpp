#include<bits/stdc++.h>
using namespace std;
int decimalToBinary(int n){
    int binary = 0;
    int power = 1;
    while(n>0){
        int lastDigit = n%2;
        binary += lastDigit*power;
        power *= 10;
        n=n/2;
    }
    return binary;
}

int binaryToDecimal(int n){
    int decimal = 0;
    int power = 1;
    while(n>0){
        int lastDigit = n%10;
        decimal += lastDigit*power;
        power *= 2;
        n=n/10;
    }
    return decimal;
}

int main(){
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    int binary = decimalToBinary(n);
    cout<<"The binary representation of "<<n<<" is: "<<binary<<endl;
    int decimal = binaryToDecimal(binary);
    cout<<"The decimal representation of "<<binary<<" is: "<<decimal<<endl;
    return 0;
}