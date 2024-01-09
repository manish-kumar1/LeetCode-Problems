#include<iostream>
using namespace std;

enum permision{

    execute = 1,
    read = 2,
    write = 4
};
int main(){

    int ans = execute ^ read ^ write;
    cout << ans;

    return 0;
}