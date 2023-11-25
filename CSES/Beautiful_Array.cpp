#include<bits/stdc++.h>
#include<vector>
using namespace std;

int minSwaps(vector<int> &nums){
    int n = nums.size();
    pair<int, int> numpos[n];
    for(int i = 0; i < n; i++){
        numpos[i].first = nums[i];
        numpos[i].second = i;
    }
    sort(numpos, numpos+n);
    vector<bool> vis(n, false);
    int ans = 0;
    for(int i = 0; i < n; i++){
        if(vis[i] || numpos[i].second == i){
            continue;
        }

        int cycle_size = 0;
        int j = i;
        while(!vis[j]){
            vis[j] = 1;

            j = numpos[j].second;
            cycle_size++;
        }
        if(cycle_size > 0){
            ans += (cycle_size-1);
        }
    }
    return ans;
}
int main(){
    int n;
    cin >> n;

    int v = 0;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        cin >> v;
        nums.push_back(v);
    }
    int ans = minSwaps(nums);

    cout << ans;

    return 0;
}