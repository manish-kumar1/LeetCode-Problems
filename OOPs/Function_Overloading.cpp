
#include<iostream>
using namespace std;

class Cal{

    public:
    int add(int a, int b){   // add function
        return a+b;
    }
    int add(int a, int b, int c){  // add function with different arguments
        return a+b+c;
    }
};
int main(){

    Cal c;    //  class object declaration

    int ans = c.add(10, 23);
    cout << ans << endl;

    int sum = c.add(10, 10, 20);
    cout << sum << endl;

    return 0;
}