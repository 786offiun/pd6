#include<iostream>
using namespace std;
string shape(int height, int x_axis, int y_axis);
main()
{
    int height, x_axis, y_axis;
    cout << "Enter height:";
    cin >> height;
    cout << "Enter x_axis:";
    cin >> x_axis;
    cout << "Enter y_axis:";
    cin >> y_axis;
    string result = shape(height, x_axis, y_axis);
    cout << result;
}

string shape(int height, int x_axis, int y_axis)
{
    string result;
    if (((x_axis> 0 && x_axis < 3 * height) && (y_axis > 0 && y_axis < height)) || ((x_axis > height && x_axis< 2 * height) && (y_axis > height && y_axis< 4 * height)))
    {
        result = "Inside";
    }
    else if (((x_axis == 0 || x_axis == 3 * height) && (y_axis == 0 || y_axis == height)) || ((x_axis== height || x_axis == 2 * height) && (y_axis== height || y_axis == 4 * height)))
    {
        result = "On border";
    }
    else
    {
        result = "Outside";
    }
    return result;
}