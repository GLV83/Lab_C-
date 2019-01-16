#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, x, g, f, y;
    int choose;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter x: ";
    cin >> x;
    cout << "1 - funkciya G\n2 - funkciya F\n3 - funkciya Y\nViberite funkciu: ";
    cin >> choose;
    switch (choose)
    {
        case 1: g = (5*(27*pow(a,2)-51*a*x+20*pow(x,2)))/(-10*pow(a,2)+21*a*x+27*pow(x,2)); cout << "G = " << g << endl; break;
        case 2: f = sinh(2*pow(a,2)+21*a*x+10*pow(x,2)); cout << "F = " << f << endl; break;
        case 3: y = -asin(4*pow(a,2)-3*a*x-7*pow(x,2)); cout << "Y = " << y << endl; break;
        default: cout << "Function does not exist" << endl; break;
    }
    return 0;
}
