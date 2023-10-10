/*
Q. Palindrome Number

Given an integer x, return true if x is a palindrome, and false otherwise.

Example 1:

Input: x = 121
Output: true
Explanation: 121 reads as 121 from left to right and from right to left.
Example 2:

Input: x = -121
Output: false
Explanation: From left to right, it reads -121. From right to left, it becomes 121-. Therefore it is not a palindrome.

Example 3:
Input: x = 10
Output: false
Explanation: Reads 01 from right to left. Therefore it is not a palindrome.
 
Constraints:
-231 <= x <= 231 - 1
*/
#include<iostream>
using namespace std;

int PalindromeNumber(int x){
    long long rev=0;
    long long temp = x;
    while(x>0){
        int r=x%10;
        x=x/10;
        rev=rev*10+r;
    }
    if(rev== temp){
        return true;
    }
    return false;
}
int main(){
    int n;
    cin >> n;

    int ans = PalindromeNumber(n);
    cout << ans;

    return 0;
}