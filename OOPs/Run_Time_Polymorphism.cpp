#include<iostream>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "Animal eat";
    }
};
class Dog : public Animal{
    public:
    void eat(){
        cout << "Bread Eat";
    }
};
int main(){
    Dog d;
    d.eat();

    return 0;
}