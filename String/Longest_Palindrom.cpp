#include<bits/stdc++.h>
using namespace std;

int solve(string s){

    map<int, char> mp;
    for(int i = 0; i < s.size(); i++){
        mp[s[i]]++;
    }
    int count = 0;
    bool flag = false;
    for(auto x : mp){
        if(x.second % 2 == 0){
            count = count + x.second;
        }
        else{
            count = count + x.second-1;
            flag = true;
        }
    }
    return flag == true ? count+1 : count;
}
int main(){

    string s;
    cin >> s;

    int ans = solve(s);
    cout << ans;

    return 0;
}