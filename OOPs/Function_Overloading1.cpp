
#include<iostream>
using namespace std;

int function1(int a, int b){
    int ans;
    ans = a * b;
    return ans;
}
string function1(string a, string b){
    return a +" "+ b;
}
int main(){

    int r1 = function1(2, 3);
    string r2 = function1("mansih", "kumar");
    cout << r1 << endl;
    cout << r2 << endl;

    return 0;

}