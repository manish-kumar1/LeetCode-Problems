/*
C++ Math sin()

The function is used to find the sine of an angle given in radian.

Syntax
Consider a radian 'x'. Syntax would be:

float sin(float x);  
float sin(double x);  
float sin(long double x);  
double sin(integral x);  
Note: If the value passed is an integer type, then it is cast to double.
Parameter
x: The value specified in terms of radian.

Return value
It returns the sine of an angle given in radian in the range[-1,1].

*/

#include<iostream>
#include<math.h>
#define pi 3.14
using namespace std;

int main(){

    double degree = 90;
    double radian = degree * pi / 180;
    cout << "Sine of an angle is : " << sin(radian);

    return 0;
}