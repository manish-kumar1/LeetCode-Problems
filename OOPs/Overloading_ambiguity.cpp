
#include<iostream>
using namespace std;

string isPrime(int n){

    if(n > 2){
        return "N0";
    }
    bool isPrime = true;
    int i = 2;

    while(n > i){
        if(n % i == 0){
            isPrime = false;
        }
        i++;
    }
    if(isPrime == true){
        return "YES";
    }
    return "NO";
}
int main(){

    int n;
    cin >> n;

    string ans = isPrime(n);

    cout << ans;
    
    return 0;
}