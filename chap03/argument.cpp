#include <iostream>

using namespace std;

void func(int i) 
{
    i++;
}

int main()
{
    int i = 10;
    cout << "(1) iの値は " << i << endl;
    func(i);
    cout << "(2) iの値は " << i << endl;
}
