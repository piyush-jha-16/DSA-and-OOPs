#include<bits/stdc++.h>
using namespace std;
class Student{
    private:
    string name;
    int rollNumber;
    public:
    void setValue(string name,int rollNumber){
        this->name = name;
        this->rollNumber = rollNumber;
    }
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll Number: "<<rollNumber<<endl;
    }
};
int main(){
    Student s1;
    s1.setValue("John Doe", 123);
    s1.display();
    
}