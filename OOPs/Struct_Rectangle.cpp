#include<iostream>
using namespace std;

struct Rectangle{

    int length;
    int width;

    int display(int l, int w){
       this->length = l;
       this->width = w;

       int ans = length * width;

       return ans;
    }
};
int main(){

    int length, width;
    cout << "Enter the value of higth : " ;
    cin >> length;
    cout << "Enter the value of width : " ;
    cin >> width;
    struct Rectangle rt;

    int ans = rt.display(length, width);
    cout << "Area of Rectangle: " << ans;

    return 0;
    
}