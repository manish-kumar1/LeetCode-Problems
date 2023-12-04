#include <iostream>
using namespace std;

class Solution {
public:
    int solve(string s, int K) {
        char x = '1';
        int count = 0;

        for (int i = 0; i < s.length(); ++i) {
            if (s[i] == x) {
                // Count the current infected person
                count = count + i;

                // Infect people on the left side
                for (int j = i - 1; j >= 0 && j >= i - K; --j) {
                    if (s[j] == x) {
                        count = count + i;
                    } else {
                        break;
                    }
                }

                // Infect people on the right side
                for (int j = i + 1; j < s.length() && j <= i + K; ++j) {
                    if (s[j] == x) {
                        count = count + i;
                    } else {
                        break;
                    }
                }
            }
        }

        return count-1;
    }
};

int main() {
    Solution obj;
    string s = "00000100";
    int K = 1;
    int result = obj.solve(s, K);
    cout << "Output: " << result << endl;
    return 0;
}