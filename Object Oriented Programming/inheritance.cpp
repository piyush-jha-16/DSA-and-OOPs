#include<bits/stdc++.h>
using namespace std;
class Employee{
    private:
    int empId;
    string name;
    public:
    void setEmployee(int id,string name){
        this->empId=id;
        this->name=name;
    }
    void displayEmployee(){
        cout<<"Employee Id : "<<empId<<endl;
        cout<<"Employee Name : "<<name<<endl;
    }
};
class FullTimeEmployee : public Employee{
    double monthlySalary;
    public:
    void setSalary(double salary){
        this->monthlySalary=salary;
    }
    void displayFullTimeEmployee(){
        displayEmployee();
        cout<<"Monthly Salary : "<<monthlySalary<<endl;
    }
};
class PartTimeEmployee : public Employee{
    int hoursWorked;
    double hourlyRate;
    public:
    void setWork(int h,double r){
        this->hoursWorked=h;
        this->hourlyRate=r;
    }
    double calculateSalary(){
        return hoursWorked*hourlyRate;
    }
};
int main(){
    FullTimeEmployee emp1;
    PartTimeEmployee emp2;
    emp1.setEmployee(101,"Alice");
    emp2.setEmployee(102,"Bob");
    emp1.setSalary(5000);
    emp2.setWork(20,15);
    cout<<"Full Time Employee Details:"<<endl;
    emp1.displayFullTimeEmployee();
    cout<<"\nPart Time Employee Details:"<<endl;
    emp2.displayEmployee();
    cout<<"Calculated Salary : "<<emp2.calculateSalary()<<endl;
    return 0;
}