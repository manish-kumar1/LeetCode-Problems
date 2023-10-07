#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int SecondLargest(vector<int> &nums){
    int largest = nums[0];
    int slargest = INT_MIN;
    for(int i = 1; i < nums.size(); i++){
        if(nums[i] > largest){
            slargest = largest;
            largest = nums[i];
        }
        else if(nums[i] < largest && nums[i] > slargest){
            slargest = nums[i];
        }
    }
    return slargest;
}
int SecondSmallest(vector<int> &nums){
    int smallest = nums[0];
    int ssmallest = INT_MAX;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] < smallest){
            ssmallest = smallest;
            smallest = nums[i];
        }
        else if(nums[i] > smallest && nums[i] < ssmallest){
            ssmallest = nums[i];
        }
    }
    return ssmallest;
}
vector<int> SecondOrderElement(vector<int> &nums){
    int slargest = SecondLargest(nums);
    int ssmallest = SecondSmallest(nums);
    
    return {slargest, ssmallest};
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
    vector<int> ans = SecondOrderElement(nums);
    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }

    return 0;
}