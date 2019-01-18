#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

float a, x_max, x, g, f, y, step_value, search;
char a_ch[255], x_ch[255], x_max_ch[255], step_ch[255], step_value_ch[255], result_ch[255];
int choose, step,i=0, p=0, num, even;
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
    cin >> a_ch;
    a = atof(a_ch);
    cout << "Enter x: ";
    cin >> x_ch;
    x = atof(x_ch);
    cout << "Enter x maximum: ";
    cin >> x_max_ch;
    x_max = atof(x_max_ch);

    while (x > x_max)
    {
        cout << "Error. X should be less than x maximum. Enter a new X." << endl;
        cout << "Enter x: ";
        cin >> x_ch;
        x = atof(x_ch);
        cout << "Enter x maximum: ";
        cin >> x_max_ch;
        x_max = atof(x_max_ch);

    }
    cout << "Enter step: ";
    cin >> step_ch;
    step = atoi(step_ch);
    cout << "Enter the step value: ";
    cin >> step_value_ch;
    step_value = atof(step_value_ch);
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

    for (int l; l < i; ++l)
    {
        itoa (result[l], result_ch, 10);
        cout << endl << "Real result: " << result[l] << endl;
        cout << "Rezult in string format: " << result_ch << endl << endl;
    }

cout << endl << "Enter the number to search";
cin >> search;


    for (int l = 0; l < step; l++)
    {
        if (result[l] == search)
        {
            p + 1;
        }
    }

    cout << "Matches" << p <<endl;
    cout << endl << "Count even numbers";
    cin >> num;

    while (num > 0)
    {
        if (num > 0)
        {
            even += 1;
        }
        num = num/10;
    }
    cout  << "Even numbers" << even << endl;

        return 0;
}
