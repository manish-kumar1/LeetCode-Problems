/*
Q. Apple and Orange

Sam's house has an apple tree and an orange tree that yield an abundance of fruit. Using the information given below, determine the number of apples and oranges that land on Sam's house.
In the diagram below:

The red region denotes the house, where S is the start point, and T is the endpoint. The apple tree is to the left of the house, and the orange tree is to its right.
Assume the trees are located on a single point, where the apple tree is at point A, and the orange tree is at point B.
When a fruit falls from its tree, it lands D units of distance from its tree of origin along the x-axis. *A negative value of D means the fruit fell D units to the tree's left, and a positive value of D means it falls D units to the tree's right.*
Apple and orange(2).png

Given the value of D for M apples and N oranges, determine how many apples and oranges will fall on Sam's house (i.e., in the inclusive range[S,t] )?

For example, Sam's house is between S=7 and T=10. The apple tree is located at a=4 and the orange at b=12. There are M=3 apples and N=3 oranges. Apples are thrown apples = [2, 3, -4] units distance from a, and orange = [3, -2, -4] units distance. Adding each apple distance to the position of the tree, they land at [4+2, 4+3, 4+(-4)] = [6, 7, 0]. Oranges land at [12+3, 12+(-2), 12+(-4)] = [15, 10, 8]. One apple and two oranges land in the inclusive range 7 - 10 so we print 1 and 2

1
2

Function Description

Complete the countApplesAndOranges function in the editor below. It should print the number of apples and oranges that land on Sam's house, each on a separate line.

countApplesAndOranges has the following parameter(s):

S: integer, starting point of Sam's house location.
T: integer, ending location of Sam's house location.
A: integer, location of the Apple tree.
B: integer, location of the Orange tree.
apples: integer array, distances at which each apple falls from the tree.
oranges: integer array, distances at which each orange falls from the tree.

Input Format

The first line contains two space-separated integers denoting the respective values of S and T.
The second line contains two space-separated integers denoting the respective values of A and B.
The third line contains two space-separated integers denoting the respective values of M and N.
The fourth line contains M space-separated integers denoting the respective distances that each apple falls from point A.
The fifth line contains N space-separated integers denoting the respective distances that each orange falls from point B.

Constraints

1 <= S,T,A,B,M,N <= 10^5
-10^5 <= d <= 10^5
A < S < T < B

Output Format

Print two integers on two different lines:

The first integer: the number of apples that fall on Sam's house.
The second integer: the number of oranges that fall on Sam's house.

Sample Input 0

7 11
5 15
3 2
-2 2 1
5 -6

Sample Output 0

1
1

Explanation 0

The first apple falls at position 5 - 2 = 3.
The second apple falls at position 5 + 2 = 7.
The third apple falls at position 5 + 1 = 6.
The first orange falls at position 15 + 5 = 20.
The second orange falls at position  15 - 6 = 9.
Only one fruit (the second apple) falls within the region between 7 and 11, so we print 1 as our first line of output.
Only the second orange falls within the region between 7 and 11, so we print 1 as our second line of output.

*/

#include<bits/stdc++.h>
using namespace std;

vector<int> countApplesAndOranges(int s, int t, int a, int b, vector<int> &apple, vector<int> &orange){

    vector<int> newApples;
    for(int i = 0; i < apple.size(); i++){
        int apls = a + apple[i];
        newApples.push_back(apls);
    }
    vector<int> newOranges;
    for(int i = 0; i < orange.size(); i++){
        int orgs = b + orange[i];
        newOranges.push_back(orgs);
    }
    int countApple = 0;
    for(int i = 0; i < newApples.size(); i++){
        if(newApples[i] >= s && newApples[i] <= t){
            countApple++;
        }
    }
    int countOrange = 0;
    for(int i = 0; i < newOranges.size(); i++){
        if(newOranges[i] >= s && newOranges[i] <= t){
            countOrange++;
        }
    }
    return {countApple, countOrange};
}
int main(){

    int S, T;
    cin >> S >> T;

    int A, B;
    cin >> A >> B;

    int M, N;
    cin >> M >> N;

    vector<int> apples;
    int apl = 0;
    for(int i = 0; i < M; i++){
        cin >> apl;
        apples.push_back(apl);
    }
    vector<int> oranges;
    int org = 0;
    for(int i = 0; i < N; i++){
        cin >> org;
        oranges.push_back(org);
    }
    cout << endl;
    vector<int> ans = countApplesAndOranges(S, T, A, B, apples, oranges);

    for(int i = 0; i < ans.size(); i++){
        cout << ans[i] << endl;
    }
    return 0;
}