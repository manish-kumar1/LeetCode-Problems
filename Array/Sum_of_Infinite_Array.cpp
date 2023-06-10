/*
Q. Sum of Infinite Array

Given an array “A” of N integers and you have also defined the new array “B” as a concatenation of array “A” for an infinite number of times.

For example, if the given array “A” is [1,2,3] then, infinite array “B” is [1,2,3,1,2,3,1,2,3,.......].

Now you are given Q queries, each query consists of two integers “L“ and “R”(1-based indexing). Your task is to find the sum of the subarray from index “L” to “R” (both inclusive) in the infinite array “B” for each query.

Note :

The value of the sum can be very large, return the answer as modulus 10^9+7.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T <= 100
1 <= N <= 10^4   
1 <= A[i] <= 10^9
1 <= Q <= 10^4
1 <= L <= R <= 10^18

Time Limit: 1sec

Sample Input 1 :
1
3
1 2 3
2
1 3
1 5
Sample Output 1 :
6 9
Explanation to Sample Input 1 :
For the first test case, the given array A is [1,2,3] therefore the infinite array “B” will be [1,2,3,1,2,3,1,2,3,.......]. So the answer for the given first query is 6 because the sum of the subarray from index 1 to 3 of infinite array “B” i.e. (B[1]+B[2]+B[3]) is 6.

For the given second query is 9 because the sum of the subarray from index 1 to 5 of array “B” .ie (B[1]+B[2]+B[3]+B[4]+B[5]) is 9.

Sample Input 2 :
1
4
5 2 6 9
3
1 5
10 13
7 11

Sample Output 2 :
27 22 28
*/

#include<bits/stdc++.h>
using namespace std;

int mod = 1000000007;
long long func(vector<long long> &sumArray, long long x, long long n) {
    long long count = (x / n) % mod;
    long long res = (count * sumArray[(int)n]) % mod;
    res = (res + sumArray[(int)(x % n)]) % mod;
    return res;
}
vector<int> sumInRanges(vector<int> &arr, int n, vector<vector<long long>> &queries, int q) {
    vector<int> ans;
    vector<long long> sumArray(n + 1);
    for (int i = 1; i <= n; i++) {
        sumArray[i] = (sumArray[i - 1] + arr[i - 1]) % mod;
    }
    for (int i = 0; i < queries.size(); i++) {
        vector<long long> range = queries[i];
        long long l = range[0];
        long long r = range[1];
        long long rsum = func(sumArray, r, n);
        long long lsum = func(sumArray, l - 1, n);
        ans.push_back((int) ((rsum - lsum + mod) % mod));
    }
    return ans;  
}

int main(){



    return 0;
}