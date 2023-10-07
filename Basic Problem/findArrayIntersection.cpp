#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &a, int n, vector<int> &b, int m)
{
    int i = 0, j = 0;
    vector<int> v;
    while (i < n && j < m)
    {
        if (a[i] == b[j])
        {
            if (v.size() != 0)
            {

                v.push_back(a[i++]);
                j++;
            }
            else
            {
                v.push_back(a[i++]);
                j++;
            }
        }
        else if (a[i] < b[j])
        {
            i++;
        }
        else if (a[i] > b[j])
        {
            j++;
        }
    }

    return v;
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

        ans = findArrayIntersection(A,n,B,m);

        for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;

    }
    return 0;
}