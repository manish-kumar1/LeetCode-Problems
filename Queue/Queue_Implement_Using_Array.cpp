#include<bits/stdc++.h>
using namespace std;

struct QueueNode
{
    int data;
    QueueNode *next;
};

class MyQueue {
private:
    int arr[100005];
    int front;
    int rear;

public :
    MyQueue(){front=0;rear=0;}
    void push(int);
    int pop();
};

void MyQueue :: push(int x)
{
        // Your Code
        if(rear == 100005){
            cout << "queue is full";
        }
        else{
            arr[rear] = x;
            rear++;
        }
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
        // Your Code   
        if(rear == front){
            return -1;
        }
        else{
            int ans = arr[front];
            arr[front] = -1;
            front++;
            if(rear == front){
                rear = front = 0;
            }
            return ans;
        }
}
int main()
{
   
    MyQueue *sq = new MyQueue();

    int Q;
    cin>>Q;
    while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }
        else if(QueryType==2){
            cout<<sq->pop()<<" ";

        }
    }
    cout<<endl;
}