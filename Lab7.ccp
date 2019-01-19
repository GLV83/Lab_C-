#include <iostream>
#include <cstdlib>
#include <cstring>
#include <math.h>
#include <fstream>
using namespace std;
struct Result
{
    char name_func_g[5];
    char name_func_f[5];
    char name_func_y[5];
    double value_func_g;
    double value_func_f;
    double value_func_y;
};
double a, x_max, x, g, f, y, step_value;
char a_ch[50], x_ch[50], x_max_ch[50], step_ch[50], step_value_ch[50], result_ch[50];
int step,l=0, num, even;
Result *result = new Result[step];
void calc()
{
    g = (5*(27*pow(a,2)-51*a*x+20*pow(x,2)))/(-10*pow(a,2)+21*a*x+27*pow(x,2));
    strcpy(result[l].name_func_g, "G");
    result[l].value_func_g = g;

    f = sinh(2*pow(a,2)+21*a*x+10*pow(x,2));
    strcpy(result[l].name_func_f, "F");
    result[l].value_func_f = f;

    y = -asin(4*pow(a,2)-3*a*x-7*pow(x,2));
    strcpy(result[l].name_func_y, "Y");
    result[l].value_func_y = y;

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

    while (l < step)
    {
        calc();
        if (x > x_max) {
            cout << "Error. X should be less than x maximum." << endl;
            break;
        }
        else
        {
            x += step_value;
            l += 1;
        }
    }
    ofstream fout("result.txt");
    for (int i = 0; i < step; i++)
    {
        fout << result[i].name_func_g << " = " << result[i].value_func_g << endl;
        fout << result[i].name_func_f << " = " << result[i].value_func_f << endl;
        fout << result[i].name_func_y << " = " << result[i].value_func_y << endl;
    }
    fout.close();

    for (int i = 0; i < step; i++)
    {
        strcpy(result[i].name_func_g, "0");
        strcpy(result[i].name_func_f, "0");
        strcpy(result[i].name_func_y, "0");
        result[i].value_func_g = 0;
        result[i].value_func_f = 0;
        result[i].value_func_y = 0;
    }

    ifstream fin("result.txt");
    while (!fin.eof())
    {
        fin.getline(file_result, 255);
        cout << file_result << endl;
    }
    fin.close();
    return 0;
}
