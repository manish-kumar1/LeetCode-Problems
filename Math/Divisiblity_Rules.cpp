#include<iostream>
using namespace std;

bool solve(int n){
    int sum = 0;
    while(n > 0){
        int rem = n % 10;
        sum = sum + rem;
        n = n / 10;
    }
    if(sum % 3 == 0 && sum % 9 != 0){
        return true;
    }
    return false;
}
int main(){

    int t;
    cin >> t;

    int count = 0;
    while(t--){
        
        int n;
        cin >> n;

        bool isTrue = solve(n);
        if(isTrue == true){
            count++;
        }
    }
    cout << count;
    return 0;
}