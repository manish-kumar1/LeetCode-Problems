/*
C++ Math cos()

The function is used to find the cosine of an angle expressed in terms of radian.

Syntax
Consider a radian 'x'. Syntax would be:

float cos(float x);  
float cos(double x);  
float cos(long double x);  
double cos(integral x);  

Note: If the value passed is an integer type, then it is cast to double.
Parameter
x: Value specified in terms of radian.

Return value
It returns the cosine of an angle in the range of[-1,1].

*/

#include <iostream>  
#include<math.h>  
using namespace std;  
int main()  
{  
    double degree=60;  
    double d=60*3.14/180;  
    cout<<"Cosine of an angle is : "<<cos(d);  
    return 0;  
}  