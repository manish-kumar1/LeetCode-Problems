/*
Q. Sqrt of x

Given a non-negative integer x, return the square root of x rounded down to the nearest integer. 
The returned integer should be non-negative as well.

You must not use any built-in exponent function or operator.

For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 
Example 1:
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

Example 2:
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.
 
Constraints:
0 <= x <= 231 - 1
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int MySqrt(int x){
    // return sqrt(x);
    
    // Binary Search
    int start = 0;
    int end = x;
    int ans = 0;
    while(start <= end){
        long long int mid = start +(end - start) / 2;
        long long int square = mid * mid;
        if(square == x){
            return mid;
        }
        else if(square < x){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return ans;
}
int main(){
    
    int x;
    cin >> x;

    int ans = MySqrt(x);
    cout << ans;

    return 0;
}