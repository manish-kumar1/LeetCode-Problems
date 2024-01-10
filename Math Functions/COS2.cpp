#include<iostream>
#include<math.h>
#define PI  3.14
using namespace std;

int main(){

    double degree = -90;
    double radian = degree * PI / 180;
    cout << "Cosine of an angle is : " << cos(radian);

    return 0;
}