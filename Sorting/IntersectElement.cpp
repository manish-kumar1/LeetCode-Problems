#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

vector<int> intersectElement(int arr1[],int n, int arr2[], int m){

    int i = 0;
    int j = 0;
    vector<int> ans;
    while(i<n && j<m){
        
        if(arr1[i] == arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i] < arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return ans;
    
}
int main(){

    int n, m;
    cin >> n >> m;

    int val = 0;
    int arr1[n];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
    }
    int arr2[m];
    for(int i = 0; i < m; i++){
        cin >> arr2[i];
    }
    vector<int> result = intersectElement(arr1, n, arr2, m);

    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }

    return 0;

}