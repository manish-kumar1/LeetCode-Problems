#include<vector>
#include<iostream>
using namespace std;

int function(int num){
    
    int sum = 0;
    while(num != 0){
        int rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    return sum;
}
vector<int> digitSum(vector<int> &nums){

    vector<int> ans;
    for(int i = 0; i < nums.size(); i++){
        ans.push_back(function(nums[i]));
    }
    return ans;
}
int main(){
    int n;
    cin >> n;

    int temp = 0;
    vector<int> nums;
    for(int i = 0; i < n; i++){
        cin >> temp;
        nums.push_back(temp);
    }

    vector<int> ans = digitSum(nums);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    return 0;
}