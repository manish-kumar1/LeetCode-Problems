#include<iostream>
using namespace std;

class Account{
    private:
    int accNo;    // data member or instance variable
    string name;
    static float rateOfInterest;  // static data member

    public:
    Account(string name, int accNo){  // parameterized constructor
        this->name = name;
        this->accNo = accNo;
    }
    void display(){   // member function
        cout << name << " " << accNo << " " << rateOfInterest << endl;
    }
    static void show(){   // static member function
        cout <<"Rate of Interest: " << rateOfInterest << endl;
    }
};
float Account::rateOfInterest = 6.5;  // define static value of rateOfInterest

int main(){
    Account ac = Account("Mister", 32188);  // creating an object of Account class ac
    Account ac2 = Account("Sanju", 34923);
    ac.display();  
    ac2.display();
    cout << endl;
    Account::show();  // calling show() without object because it is a static member function

    return 0;
}