
// #include<bits/stdc++.h>
// using namespace std;

// string function1(string s){

//     if(s.size() == 0){
//         return s;
//     }
//     string ans = "";
//     ans.push_back(s[0]);
//     int j = 0;
//     for(int i = 1; i < s.size(); i++){
//         if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C' || s[i] == 'D' || s[i] == 'E' 
//         || s[i] == 'F' || s[i] == 'G' || s[i] == 'H' || s[i] == 'I'
//         || s[i] == 'J' || s[i] == 'K' || s[i] == 'L' || s[i] == 'M' || s[i] == 'N'  || s[i] == 'O'
//         || s[i] == 'P' || s[i] == 'Q' || s[i] == 'R' || s[i] == 'S' || s[i] == 'T'
//         || s[i] == 'U' || s[i] == 'V' || s[i] == 'W' || s[i] == 'X' || s[i] == 'Y'
//         || s[i] == 'Z'){

//             ans.push_back(tolower(s[i]));
//             j = i;
//         }
//         else if(s[i] == 'a' || s[i] == 'b' || s[i] == 'c' || s[i] == 'd' || s[i] == 'e' 
//         || s[i] == 'f' || s[i] == 'g' || s[i] == 'h' || s[i] == 'i' || s[i] == 'j'
//         || s[i] == 'k' || s[i] == 'l' || s[i] == 'm' || s[i] == 'n' || s[i] == 'o'
//         || s[i] == 'p' || s[i] == 'q' || s[i] == 'r' || s[i] == 's' || s[i] == 't'
//         || s[i] == 'u' || s[i] == 'v' || s[i] == 'w' || s[i] == 'x' || s[i] == 'y'
//         || s[i] == 'z'){

//             ans.push_back(toupper(s[i]));
//             j = i;
//             break;
//         }
//     }
//     for(int i = j+1; i < s.size(); i++){
//         ans.push_back(s[i]);
//     }
//     return ans;
// }
// int main(){

//     string s;
//     cin >> s;

//     string ans = function1(s);
//     cout << ans;
    
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// string solve(string s){
    
//     string temp = "CODETOWN";
//     for(int i = 0; i < 8; i++){
//         if((s[i]!='A' && s[i]!='I' && s[i]!='E' && s[i]!='O' && s[i]!='U') 
//         && (temp[i]!='A' && temp[i]!='I' && temp[i]!='E' && temp[i]!='O' && temp[i]!='U')){
//             s[i] = temp[i];
            
//         }
//         else if((s[i]=='A' || s[i]=='I' || s[i]=='E' || s[i]=='O' || s[i]=='U')
//         && (temp[i]=='A' || temp[i]=='I' || temp[i]=='E' || temp[i]=='O' || temp[i]=='U')){
//             s[i] = temp[i];
//         }
//     }
//     if(s == temp){
//         return "YES";
//     }
//     else{
//         return "NO";
//     }
// }
// int main() {
// 	// your code goes here
//     int t;
//     cin >> t;
//     while(t--){
//         string s;
//         cin >> s;
        
//         string ans = solve(s);
//         cout << ans << endl;
//     }
//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    cout << 5 % 1 ;
}