    
#include<iostream>
#include<vector>
using namespace std;

vector<int> intersectionOfTwoSortedArray(vector<int> &A, vector<int> &B, int n, int m){
    int i = 0;
    int j = 0;

    vector<int> temp;
    while(i < n && j < m){
        if(A[i] == B[j]){
            temp.push_back(A[i]);
            i++;
            j++;
        }
        else if(A[i] < B[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return temp;
}
int main(){

    int T;
    cin >> T;
    while(T--){
        int n, m;
        cin >> n >> m;

        int v = 0;
        vector<int> A;
        for(int i = 0; i < n; i++){
            cin >> v;
            A.push_back(v);
        }
        int k = 0;
        vector<int> B;
        for(int i = 0; i < m; i++){
            cin >> k;
            B.push_back(k);
        }
        vector<int> ans;

        ans = intersectionOfTwoSortedArray(A,B,n,m);

        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;

    }
    return 0;
}