#include<iostream>
using namespace std;

float function1(int a, int b){

    if(b == 0){
        throw "Attempted to divide by zero!";
    }
    return a/b;
}
int main(){

    int a, b;
    cout << "Enter the value of 'a' and 'b' " << endl;
    cin >> a >> b;

    float ans = 0;

    try{
        ans = function1(a, b);
        cout << ans;
    }
    catch(const char *e){
        cout << "Exception Occured! " << e <<endl;
    }
    return 0;
}