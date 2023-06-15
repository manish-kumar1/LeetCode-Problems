/*
C++ Math atan2()

The function finds the inverse tangent of a coordinate.

Suppose the coordinate is (x,y):

atan2(y,x) = tan-1(y/x);
Syntax
Suppose the coordinate is (x,y). Syntax would be:

float atan2(float y, float x);  
double atan2(double y, double x);  
long double atan2(long double y, long double x);  
Promoted atan2(Arithmetic1 y, Arithmetic x ); 

Parameter
y: It represents the y-coordinate value.

x: It represents the x-coordinate value.

Return value
It returns the value in the range[-?, ?] and if the values of both x and y are zero then it returns zero value.

If any argument is of integral type, it is cast to double.
If any argument is of long double type, it is cast to long double.

*/

#include <iostream>  
#include<math.h>  
using namespace std;  
int main()  
{  
    int x=0;  
    int y=0; 

    cout<< "Value of tan(y/x) is : " << tan(y/x) << '\n';  
    cout << "Value of tan-1(y/x) is : " << atan2(y,x) << endl;  

    return 0;  
}  


// Value of tan(y/x) is : 0
// Value of tan-1(y/x) is : 0