/*
Q. Convert Sentence Into Mobile Numberic

Given a sentence in the form of a string in uppercase, convert it into its equivalent mobile numeric keypad sequence. 
Please note there might be spaces in between the words in a sentence and we can print spaces by pressing 0.

Example 1:

Input:
S = "GFG"
Output: 43334
Explanation: For 'G' press '4' one time.
For 'F' press '3' three times.

Example 2:

Input:
S = "HEY U"
Output: 4433999088
Explanation: For 'H' press '4' two times.
For 'E' press '3' two times. For 'Y' press '9' 
three times. For white space press '0' one time.
For 'U' press '8' two times.
 
Your Task:  
You dont need to read input or print anything. Complete the function printSequence() which takes a string as input parameter and returns its equivalent mobile numeric keypad sequence as a string.
 
Expected Time Complexity: O(Length of String)
Expected Auxiliary Space: O(Length of String)
 
Constraints:
1 <= Length of String <= 105
Characters of string can be empty space or capital alphabets.
*/

#include<iostream>
using namespace std;
string function2(char ch){
    string st = "";
    switch(ch){
        case 'A':
            st = "2";
            break;
        case 'B':
            st = "22";
            break;
        case 'C':
            st = "222";
            break;
        case 'D':
            st = "3";
            break;
        case 'E':
            st = "33";
            break;
        case 'F':
            st = "333";
            break;
        case 'G':
            st = "4";
            break;
        case 'H':
            st = "44";
            break;
        case 'I':
            st = "444";
            break;
        case 'J':
            st = "5";
            break;
        case 'K':
            st = "55";
            break;
        case 'L':
            st = "555";
            break;
        case 'M':
            st = "6";
            break;
        case 'N':
            st = "66";
            break;
        case 'O':
            st = "666";
            break;
        case 'P':
            st = "7";
            break;
        case 'Q':
            st = "77";
            break;
        case 'R':
            st = "777";
            break;
        case 'S':
            st = "7777";
            break;
        case 'T':
            st = "8";
            break;
        case 'U':
            st = "88";
            break;
        case 'V':
            st = "888";
            break;
        case 'W':
            st = "9";
            break;
        case 'X':
            st = "99";
            break;
        case 'Y':
            st = "999";
            break;
        case 'Z':
            st = "9999";
            break;
        default:
            st = "0";
    }
    return st;
}
string printSequence(string S){
    string str = "";
    for(int i = 0; i < S.size(); i++){
        str = str + function2(S[i]);
    }
    return str;
}
int main(){

    string S;
    getline(cin, S);

    string ans = printSequence(S);
    cout << ans;

    return 0;
}