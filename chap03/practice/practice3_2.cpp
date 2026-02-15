#include <iostream>

using namespace std;

void say_hello(int count) 
{
    for (int i = 0; i < count; i++) {
        cout << "Hello" << endl;
    }
}

double rectangle_area(double width, double height)
{
    return width * height;
}

int absolute_value(int value) 
{
    if (value < 0) {
        value *= -1;
    }
    return value;
}

double average(double a, double b, double c)
{
    return (a + b + c) / 3;
}

int main()
{
    cout << "(1)" << endl;
    say_hello(3);

    cout << "(2)" << endl;
    cout << rectangle_area(4.7, 2.3) << endl;

    cout << "(3)" << endl;
    cout << absolute_value(10) << endl;
    cout << absolute_value(-7) << endl;

    cout << "(4)" << endl;
    cout << average(1.3, 3.8, 5.9) << endl;
}
