/*
Q. Daily Temperatures

Given an array of integers temperatures represents the daily temperatures, return an array answer such that answer[i] is the number of days you have to wait after the ith day to get a warmer temperature. If there is no future day for which this is possible, keep answer[i] == 0 instead.

Example 1:

Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]

Example 2:

Input: temperatures = [30,40,50,60]
Output: [1,1,1,0]

Example 3:

Input: temperatures = [30,60,90]
Output: [1,1,0]
 
Constraints:

1 <= temperatures.length <= 105
30 <= temperatures[i] <= 100

*/

#include<bits/stdc++.h>
using namespace std;

vector<int> dailyTemperatures(vector<int> &temperatures){

    int n = temperatures.size();
    stack<int> st;
    vector<int> ans(n);

    for(int i = n - 1; i >= 0; i--){
        while(!st.empty() && temperatures[i] >= temperatures[st.top()]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = 0;
        }
        else{
            ans[i] = st.top() - i;
        }
        st.push(i);
    }
    return ans;
}
int main(){

    int n;
    cin >> n;

    int temp = 0;
    vector<int> temperatures;
    for(int i = 0; i < n; i++){
        cin >> temp;
        temperatures.push_back(temp);
    }
    vector<int> ans = dailyTemperatures(temperatures);
    
    cout << "Output -> ";
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}
