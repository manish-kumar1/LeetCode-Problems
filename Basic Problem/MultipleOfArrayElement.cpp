#include<iostream>
using namespace std;

int solve(int arr[], int n){
    
    int mul = 1;
    for(int i = 0; i < n; i++){
        mul = mul * arr[i];
    }
    return mul;
}
int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int ans = solve(arr, n);
    cout << ans;

    return 0;
}