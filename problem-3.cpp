#include<iostream>
using namespace std;

class Student{
    public:
    int rollNumber;
    string name;
    int marks;

    Student(int roll, string rname){
        rollNumber = roll;
        name = rname;
        cout << "Student " << name << " created with no marks." << endl;
    }

    Student(int roll, string rname , int rmarks){
        rollNumber = roll;
        name = rname;
        marks = rmarks;
        char grade;
        if (marks > 0 && marks < 40)
        {
            grade = 'F';
        }
        else if (marks >= 40 && marks <50)
        {
            grade = 'E';
        }
        else if (marks >= 50 && marks <60)
        {
            grade = 'D';
        }   
        else if (marks >= 60 && marks < 70)
        {
            grade = 'C';
        }   
        else if (marks >= 70 && marks < 80)
        {
            grade = 'B';
        } 
        else if (marks >= 80)
        {
            grade = 'A';
        }
        cout << "Student " << name << " created with marks "<< marks << " Grade: " << grade << "."<< endl;
    }
};

int main(){
    Student student1(101, "Tom");
    Student student2(102, "Lisa", 75);
    return 0;
}