/*
Q. Happy Number

Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not.

 
Example 1:
Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1

Example 2:
Input: n = 2
Output: false
 
Constraints:
1 <= n <= 231 - 1
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool isHappyNumber(int n){

    if(n == 1 || n == 7){
        return true;
    }
    int sum = 0;
    while(1){
        while(n != 0){
            int digit = n % 10;
            sum = sum + pow(digit, 2);
            n = n/10;
        }
        if((sum == 1 || sum/10 == 0) && sum != 7){
            break;
        }
        n = sum;
        sum = 0;
    }
    if(sum == 1){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;

    bool ans = isHappyNumber(n);
    cout << ans;

    return 0;
}