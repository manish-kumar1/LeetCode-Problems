#include<iostream>
using namespace std;

class A{
    public:
    int a = 5;
    int b = 4;

    int mul(){
        int ans = a * b;
        return ans;
    }
};
class B : private A{
    public:
    void display(){
        int result = mul();
        cout << "Multiplication of a and b is : " << result << endl;
    }
};

int main(){
    B b;
    b.display();
    return 0;
}
