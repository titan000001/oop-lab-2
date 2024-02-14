#include<iostream>
using namespace std;

class Employee{
public:
    int employeeID;
    string name;
    long salary;

    Employee(int remployeeID, string rname){
        employeeID = remployeeID;
        name = rname;
        salary = 0;
        cout << "Employee " << employeeID << " created with no salary" << endl;
    }

    Employee(int remployeeID, string rname, long rsalary){
        employeeID = remployeeID;
        name = rname;
        salary = rsalary;
        cout << "Employee " << employeeID << " created with salary : "<< salary ;
        long annualSalary = salary * 12;
        cout << " Annual Salary: " << annualSalary << endl;
    }
};

main(){
    Employee emp1(001, "John");
    Employee emp2(002, "Jane", 5000);
    return 0;
}