#include<iostream>
using namespace std;

enum week {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    Sunday
};
int main(){
    enum week day;
    day = Tuesday;
    cout << day << endl;

    return 0;
}