/*
C++ Parameterized Constructor
A constructor which has parameters is called parameterized constructor. It is used to provide different values to distinct objects.

Let's see the simple example of C++ Parameterized Constructor.
*/

#include<iostream>
using namespace std;

class Student{

    public:
    string stud_Name;  // data member or instance variable
    int roll_No;
    float fees;

    Student(string name, int rollNo, float fee){   
        stud_Name = name;
        roll_No = rollNo;
        fees = fee;
    }
    void Show(){  // member function
        cout << stud_Name << " " << roll_No << " " << fees << endl;
    }

};

int main(){

    Student s1 = Student("Manish", 69, 72000.0); // creating an object of Student with arguments
    Student s2 = Student("Noman", 53, 5000.0);

    s1.Show();  // call show method
    s2.Show();

    return 0;

}