/*
Number of 1 Bits

write a function that takes an unsined integer and 
returns the number of '1' bits and it also known as 
the 'Hamming Weight'.

example 
input: n = 0000000000000000000001011
output = 3
explanation: the input binary string has 3 '1' bits.
*/

#include<iostream>
using namespace std;

int numberOf1Bits(int n){

    int count = 0;

    while(n != 0){

        if(n&1){
            count++;
        }
        n = n >> 1;
    }
    
    return count;
}
int main(){

    int n;
    cin >> n;

    int ans = numberOf1Bits(n);
    cout << ans;

    return 0;
}