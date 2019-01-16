#include <iostream>
#include <math.h>
using namespace std;

float a, x_max, x, g, f, y, step_value, max_value, min_value;
int choose, step,i=0;
float *result = new float[step];

void calc()
{
    switch (choose)
    {
        case 1:
            g = (5*(27*pow(a,2)-51*a*x+20*pow(x,2)))/(-10*pow(a,2)+21*a*x+27*pow(x,2));
            result[i]=g; break;
        case 2:
            f = sinh(2*pow(a,2)+21*a*x+10*pow(x,2));
            result[i]=f; break;
        case 3:
            y = -asin(4*pow(a,2)-3*a*x-7*pow(x,2));
            result[i]=y; break;
        default: cout << "Function does not exist" << endl; break;
    }
}

int main()
{
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter x maximum: ";
    cin >> x_max;
    while (x > x_max)
    {
        cout << "Error. X should be less than x maximum. Enter a new X." << endl;
        cout << "Enter x: ";
        cin >> x;
        cout << "Enter x maximum: ";
        cin >> x_max;
    }
    cout << "Enter step: ";
    cin >> step;
    cout << "Enter the step value: ";
    cin >> step_value;
    cout << "1 - funkcion G\n2 - funkcion F\n3 - funkcion Y\nSelect funkcion: ";
    cin >> choose;

    while (i < step)
    {
        calc();
        if (x > x_max) {
            cout << "Error. X should be less than x maximum." << endl;
            break;
        }
        else
            {
            x += step_value;
            i += 1;
            }
    }
    cout << endl << "Rezultati:" << endl;
    for (int l; l < i; ++l)
    {
        cout << result[l] << endl;
    }

    min_value = result[0];
    max_value = result[0];

    for (int l = 0; l < i; ++l)
    {
        if (result[l] > max_value)
        {
            max_value = result[l];
        }
    }

    for (int l = 0; l < i; ++l)
    {
        if (result[l] < min_value)
        {
            min_value = result[l];
        }
    }

    cout << endl << "Minimum value: " << min_value << endl;
    cout << "Maximum value: " << max_value << endl;
        return 0;
}
