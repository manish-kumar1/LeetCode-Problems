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

// In this example, cos() function finds the cosine of an angle when the value is negative but it remains the same as cos(-x) =cos(x).