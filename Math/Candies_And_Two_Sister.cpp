
// this problem taken form the codeforces platform

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    
    int t;
    cin >> t;
    while(t--){
        
        long long n;
        cin >> n;
        
        if(n%2 == 0){
            cout << n/2-1 << endl;
        }
        else{
            cout << n/2 << endl;
        }
    }
    return 0;
}