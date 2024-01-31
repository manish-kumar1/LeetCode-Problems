
#include<iostream>
using namespace std;

template <class T, int size> 

class Array{

    public:
    T arr[size];
    int j = 1;
    void insert(){
        for(int i = 0; i < size; i++){
            arr[i] = j;
            j++;
        }
    }
    void display(){
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
    }
};
int main(){

    Array <int, 10> A;
    A.insert();
    A.display();

    return 0;
}