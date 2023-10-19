/*
Q. Guess Number Higher Or Lower

We are playing the Guess Game. The game is as follows:

I pick a number from 1 to n. You have to guess which number I picked.

Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

You call a pre-defined API int guess(int num), which returns three possible results:

-1: Your guess is higher than the number I picked (i.e. num > pick).
1: Your guess is lower than the number I picked (i.e. num < pick).
0: your guess is equal to the number I picked (i.e. num == pick).
Return the number that I picked.

Example 1:
Input: n = 10, pick = 6
Output: 6

Example 2:
Input: n = 1, pick = 1
Output: 1

Example 3:
Input: n = 2, pick = 1
Output: 1
 
Constraints:
1 <= n <= 231 - 1
1 <= pick <= n
*/

#include<iostream>
#include<vector>
using namespace std;

int GuessNumber(int n){
    int low = 1;
    int high = n;
    int value;
    while(low <= high){
        int guessNO = low + (high - low) / 2;
        // int value = guess(guessNO);

        if(value == 0){
            return guessNO;
        }
        else if(value == -1){
            high = guessNO -1;
        }
        else{
            low = guessNO + 1;
        }
    }
    return -1;
}
int main(){

    int n;
    cin >> n;

    int ans = GuessNumber(n);
    cout << ans;
    return 0;
}