#include<iostream>
using namespace std;

class College{
    public:
    void show(){
        cout << "Function Overriding" <<endl;
    }
};
class Student : public College{
    public:
    void show(){
        cout << "Function Overriding derived class" << endl;
    }
};
int main(){

    Student std;
    std.show();
    
    return 0;
}