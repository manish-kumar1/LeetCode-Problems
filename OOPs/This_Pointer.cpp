/*
C++ This Pointer

In C++ programming, this is a keyword that refers to the current instance of the class. There can be 3 main usage of this keyword in C++.

It can be used to pass current object as a parameter to another method.
It can be used to refer current class instance variable.
It can be used to declare indexers.
*/

#include<iostream>
using namespace std;

class Employee{
    public:
    
    string name;
    int id;
    string company;

    Employee(string name, int id, string company){
        this->name = name;
        this->id = id;
        this->company = company;
    }
    void display(){
        cout << name << " " << id << " " << company << endl;
    }
};

int main(){

    Employee emp1 = Employee("Manish", 103, "MicroSoft");
    Employee emp2 = Employee("Minal", 304, "Google");

    emp1.display();
    emp2.display();

    return 0;
}
