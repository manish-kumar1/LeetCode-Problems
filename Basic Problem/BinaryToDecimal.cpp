
#include<iostream>
#include<math.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    int ans = 0, i = 0;

    while(n != 0){
        int digit = n % 10;

        if(digit){
            ans = ans + pow(2, i);
        }
        n = n / 10;
        i++;
    }
    cout << ans;

    return 0;
}