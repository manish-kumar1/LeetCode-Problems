
#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    // constructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node* &head, int data){

    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}
void print(Node* &head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp -> next;
    }
    // cout << endl;
}
void insertAtTail(Node* &tail, int data){
    
    Node* temp = new Node(data);
    tail -> next = temp;
    tail = temp;
}
void insertAtPosition(Node* &tail, Node* & head, int position, int d) {


    //insert at Start
    if(position == 1) {
        insertAtHead(head, d);
        return;
    }

    Node* temp  = head;
    int cnt = 1;

    while(cnt < position-1) {
        temp = temp->next;
        cnt++;
    }

    //inserting at Last Position
    if(temp -> next == NULL) {
        insertAtTail(tail,d);
        return ;
    }

    //creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}
int main(){

    Node* node = new Node(10);
    
    Node* head = node;
    Node* tail = node;
    print(head);

    insertAtHead(head, 12);
    // print(head);

    insertAtHead(head, 20);
    // print(head);

    insertAtTail(tail, 50);
    // print(tail);

    insertAtPosition(tail,head, 4, 22);
    print(head);   

}