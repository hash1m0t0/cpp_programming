#include <iostream>

using namespace std;

bool is_positive_number(double d)
{
    return d > 0;
}

int main()
{
    double d = -1.5;
    if (is_positive_number(d)) {
        cout << "dの値は正です" << endl;
    } else {
        cout << "dの値は正ではありません" << endl;
    }
}
