#include<iostream>
#include<queue>
using namespace std;

int main(){

    queue<int> q;

    q.push(23);
    q.push(34);
    q.push(43);

    cout << "size of queue : " <<q.size() <<endl; 

    int temp = q.front();
    cout << temp << endl;

    q.pop();

    int temp2 = q.front();
    cout << temp2 << endl;

    cout << "size of queue : " << q.size() << endl;

    if(q.empty()){
        cout << "queue khali hai";
    }
    else{
        cout << "queue khali nahi hai";
    }


    return 0;
}