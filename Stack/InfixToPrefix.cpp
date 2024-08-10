#include<bits/stdc++.h>
using namespace std;

int prec(char ch){
    
    if(ch == '^'){
        return 3;
    }
    else if(ch == '/' or ch == '*'){
        return 2;
    }
    else if(ch == '-' or ch == '+'){
        return 1;
    }
    else{
        return -1;
    }
}
string InfixToPrefix(string str){
    reverse(str.begin(), str.end());

    stack<char> st;
    string result;
    for(int i = 0; i < str.length(); i++){
        if((str[i] >= 'a' and str[i] <= 'z') or (str[i] >= 'A' and str[i] <= 'Z')){
            result = result + str[i];
        }
        else if(str[i] == ')'){
            st.push(str[i]);
        }
        else if(str[i] == '('){
            while(!st.empty() and st.top() != ')'){
                result = result + st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() and prec(st.top()) >= prec(str[i])){
                result = result + st.top();
                st.pop();
            }
            st.push(str[i]);
        }
    }
    while(!st.empty()){
        result = result + st.top();
        st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

int main(){

    string str;
    cin >> str;

    string ans = InfixToPrefix(str);
    cout << ans;

    return 0;
}