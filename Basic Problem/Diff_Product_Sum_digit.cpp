/*
Subtract the product and sum of digit of an interger

Given an integer number n, return the difference between the product of its digit and the sum of its digit.

Example 
intput: n = 234
output: 15

explanation:
product of digit 2 * 3 * 4 = 24
sum of digit 2 + 3 + 4 = 9

Result = 24 - 9 = 15

*/

#include<iostream>
using namespace std;

int subtractProductAndSum(int n){

    int prod = 1;
    int sum = 0;

    while(n != 0){

        int digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;
        n = n / 10;
    }
    int result = prod - sum;
    return result;
}
int main(){

    int n;
    cin >> n;

    int ans = subtractProductAndSum(n);
    cout << ans;

    return 0;
}