/*
Q. Add String

Given two non-negative integers, num1 and num2 represented as string, return the sum of num1 and num2 as a string.

You must solve the problem without using any built-in library for handling large integers (such as BigInteger). You must also not convert the inputs to integers directly.

Example 1:

Input: num1 = "11", num2 = "123"
Output: "134"

Example 2:

Input: num1 = "456", num2 = "77"
Output: "533"

Example 3:

Input: num1 = "0", num2 = "0"
Output: "0"
 
Constraints:

1 <= num1.length, num2.length <= 104
num1 and num2 consist of only digits.
num1 and num2 don't have any leading zeros except for the zero itself.
*/
#include<bits/stdc++.h>
#include<iostream>
using namespace std;

char addCharacter(char a, char b, int &carry){
    char ans = carry+a+b-48;
    if(ans > 57){
        carry = 1;
        ans = ans - 10;
        return ans;
    }
    else{
        carry = 0;
        return ans;
    }
}
string addString(string nums1, string nums2){
    if(nums1 == "0" && nums2 == "0"){
        return "0";
    }
    if(nums1 == "0"){
        return nums2;
    }
    if(nums2 == "0"){
        return nums1;
    }

    int i = nums1.size()-1;
    int j = nums2.size()-1;
    int carry = 0;
    string ans = "";

    while(i >= 0 && j >= 0){
        char ch = addCharacter(nums1[i], nums2[j], carry);
        ans.push_back(ch);
        i--;
        j--;
    }
    while(i >= 0){
        char ch = addCharacter(nums1[i], '0', carry);
        ans.push_back(ch);
        i--;
    }
    while(j >=0 ){
        char ch = addCharacter('0', nums2[j], carry);
        ans.push_back(ch);
        j--;
    }
    while(carry != 0){
        ans.push_back(carry + 48);
        carry = 0;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
int main(){
    
    string nums1, nums2;
    cin >> nums1 >> nums2;

    string ans = addString(nums1, nums2);
    cout << ans;

    return 0;
}