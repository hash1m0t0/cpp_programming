#include <iostream>

using namespace std;

// prototype
void func1(int a);
void func2();

int main()
{
    func1(10);
    func2();
}

void func1(int a)
{
    cout << "func1が呼び出されました" << endl;
}

void func2()
{
    cout << "func2が呼び出されました" << endl;
}