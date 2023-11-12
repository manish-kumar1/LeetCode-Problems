/*
Q. Reverse Vowels of a String

Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.

Example 1:

Input: s = "hello"
Output: "holle"

Example 2:

Input: s = "leetcode"
Output: "leotcede"

Constraints:
1 <= s.length <= 3 * 105
s consist of printable ASCII characters.
*/

#include <iostream>
using namespace std;

string reverseVowels(string s)
{
    int first = 0;
    int last = s.size() - 1;
    while (first < last)
    {
        // if first and last character both are vowels then swap it
        if ((s[first] == 'a' || s[first] == 'e' || s[first] == 'i' || s[first] == 'o' || s[first] == 'u' || s[first] == 'A' || s[first] == 'E' || s[first] == 'I' || s[first] == 'O' || s[first] == 'U') && (s[last] == 'a' || s[last] == 'e' || s[last] == 'i' || s[last] == 'o' || s[last] == 'u' || s[last] == 'A' || s[last] == 'E' || s[last] == 'I' || s[last] == 'O' || s[last] == 'U'))
        {
            swap(s[first], s[last]);
            first++;
            last--;
        }

        // if first is vowel but last is not vowel then decrement last

        else if ((s[first] == 'a' || s[first] == 'e' || s[first] == 'i' || s[first] == 'o' || s[first] == 'u' || s[first] == 'A' || s[first] == 'E' || s[first] == 'I' || s[first] == 'O' || s[first] == 'U') && (s[last] != 'a' || s[last] != 'e' || s[last] != 'i' || s[last] != 'o' || s[last] != 'u' || s[last] != 'A' || s[last] != 'E' || s[last] != 'I' || s[last] != 'O' || s[last] != 'U'))
        {
            last--;
        }

        // if last is vowel but first is not vowel then incremnt first

        else if ((s[first] != 'a' || s[first] != 'e' || s[first] != 'i' || s[first] != 'o' || s[first] != 'u' || s[first] != 'A' || s[first] != 'E' || s[first] != 'I' || s[first] != 'O' || s[first] != 'U') && (s[last] == 'a' || s[last] == 'e' || s[last] == 'i' || s[last] == 'o' || s[last] == 'u' || s[last] == 'A' || s[last] == 'E' || s[last] == 'I' || s[last] == 'O' || s[last] == 'U'))
        {
            first++;
        }
        // if both are not vowel then increment first and decrement last
        else
        {
            first++;
            last--;
        }
    }

    return s;
}
int main()
{
    string s;
    cin >> s;

    string ans = reverseVowels(s);
    cout << ans;

    return 0;
}