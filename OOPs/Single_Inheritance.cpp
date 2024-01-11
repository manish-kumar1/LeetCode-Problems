#include<iostream>
using namespace std;

class Account{
    public:
    string AccHolderName = "Mister";
    static string IFSC_Code;

};
class Costumer : public Account{
    public:
    int accNo;
    int balance = 1000;
    void show(int accNo){
        if(accNo == 12345){
            cout << "Account Holder Name : " << AccHolderName << ", " << "Balance : " << balance << ", " << "IFSC Code : " << IFSC_Code << endl;
        }
        else{
            cout << "Invalid Account Number ";
        }
    }
};
string Account::IFSC_Code = "PUNB240000";
int main(){

    int acc; cin >> acc;
    Costumer c1;

    c1.show(acc);
    cout << endl;

    cout << c1.AccHolderName << " " << c1.IFSC_Code << " " << c1.balance << endl;

    return 0;
}