#include <iostream>

using namespace std;

double circle_area(double r) 
{
    return r * r * 3.14159;
}

int main()
{
    double d = circle_area(2.5);
    cout << "半径2.5の円の面積は " << d << endl;
}
