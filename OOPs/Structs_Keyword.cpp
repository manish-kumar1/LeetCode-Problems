
#include<iostream>
using namespace std;

struct person{
    string name;
    int age;
    char gender;

    void print_info(){
        cout << "name: " << name << " " << ", age: " << age << " " << ", gender: " << gender << endl;
    }
};
int main(){

    struct person p1;
    p1.name = "Mister";
    p1.age = 22;
    p1.gender = 'm';

    p1.print_info();

    struct person p2;
    p2.name = "Sanju";
    p2.age = 46;
    p2.gender = 'f';

    p2.print_info();
    
    cout << endl;
    return 0;
}
