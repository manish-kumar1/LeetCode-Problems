#include<iostream>
using namespace std;

struct Rectangle{

    int width;
    int length;

    Rectangle(int width, int length){
        this->width = width;
        this->length = length;
    }
    void display(){
        cout << "Area of Rectangle is : " << (width*length) << endl;
    }
};
int main(){

    struct Rectangle r = Rectangle(5, 3);
    r.display();

    return 0;

}