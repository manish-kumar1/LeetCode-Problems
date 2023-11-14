/*
Q. Count Number of Substrings

Given a string of lowercase alphabets, count all possible substrings (not necessarily distinct) that have exactly k distinct characters.

Example 1:

Input:
S = "aba", K = 2
Output:
3
Explanation:
The substrings are: "ab", "ba" and "aba".

Example 2:

Input:
S = "abaaca", K = 1
Output:
7
Explanation:
The substrings are: "a", "b", "a", "aa", "a", "c", "a".
Your Task:
You don't need to read input or print anything. Your task is to complete the function substrCount() which takes the string S and an integer K as inputs and returns the number of substrings having exactly K distinct characters.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ |S| ≤ 106
1 ≤ K ≤ 26
*/

#include <iostream>
using namespace std;
typedef long long int llt;

llt Atmost(string s, int k){
    if (k < 0)
        return 0;

    int i = 0, j = 0, cnt = 0;
    long long int res = 0;
    int m[26] = {0};

    while (j < s.length())
    {
        m[s[j] - 'a']++;
        if (m[s[j] - 'a'] == 1)
            cnt++;

        while (cnt > k)
        {
            m[s[i] - 'a']--;
            if (m[s[i] - 'a'] == 0)
                cnt--;
            i++;
        }
        res += (j - i + 1);
        j++;
    }
    return res;
}
llt countSubstrings(string s, int k){
    return Atmost(s, k) - Atmost(s, k - 1);
}
int main()
{
    string S;
    cin >> S;
    int k;
    cin >> k;

    llt ans = countSubstrings(S, k);
    cout << ans;

    return 0;
}
