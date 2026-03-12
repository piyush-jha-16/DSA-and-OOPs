#include<bits/stdc++.h>
using namespace std;

int hcf(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    return num1;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "HCF (iterative) of "<<a<<" and "<<b<<" = "<< hcf(a, b) << endl;
    return 0;
}