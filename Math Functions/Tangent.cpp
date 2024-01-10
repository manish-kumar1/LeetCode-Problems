/*
C++ Math tan()

The function finds the tangent of an angle specified in terms of radian.

Syntax
Consider a radian 'x'. Syntax would be:

float tan(float x);  
double tan(double x);  
long double tan(long double x);  
double tan(integral x);  

Note: If the value passed is an integral type, then it is cast to double.
Parameter
x: The value given in radian.

Return value
It returns the tangent of an angle given in radian.

*/

#include<iostream>
#include<math.h>
#define pi 3.14
using namespace std;

int main(){

    float degree = 10;
    float radian = degree * pi / 180;
    cout << "Tangent of an angle is : " << tan(radian);

    return 0;
}