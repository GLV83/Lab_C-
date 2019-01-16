#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, x, g, f, y;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter x: ";
    cin >> x;
   g = (5*(27*pow(a,2)-51*a*x+20*pow(x,2)))/(-10*pow(a,2)+21*a*x+27*pow(x,2));
    f = sinh(2*pow(a,2)+21*a*x+10*pow(x,2));
    y = -asin(4*pow(a,2)-3*a*x-7*pow(x,2));
    cout << "g = " << g << endl;
    cout << "f = " << f << endl;
    cout << "y = " << y << endl;
    return 0;
}
