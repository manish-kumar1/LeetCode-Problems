#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

struct Project {
    int expenditure;
    int completionBonus;
    int rewardOrPenalty;
};

int calculateMinBudget(int n, vector<Project>& projects) {
    vector<vector<int>> dp(n + 1, vector<int>(10001, INT_MAX));

    dp[0][0] = 0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= 10000; ++j) {
            if (j >= projects[i - 1].expenditure) {
                dp[i][j] = min(dp[i - 1][j], dp[i - 1][j - projects[i - 1].expenditure] + projects[i - 1].completionBonus);
            }
        }
    }

    int minBudget = INT_MAX;

    for (int j = 0; j <= 10000; ++j) {
        if (dp[n][j] != INT_MAX) {
            minBudget = min(minBudget, j);
        }
    }

    return minBudget;
}

int main() {
    int n;
    cin >> n;

    vector<Project> projects(n);

    for (int i = 0; i < n; ++i) {
        cin >> projects[i].expenditure >> projects[i].completionBonus >> projects[i].rewardOrPenalty;
        if (projects[i].rewardOrPenalty < 0) {
            projects[i].completionBonus = max(0, projects[i].completionBonus + projects[i].rewardOrPenalty);
        }
    }

    int result = calculateMinBudget(n, projects);

    cout << result << endl;

    return 0;
}