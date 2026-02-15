#include <iostream>

using namespace std;

void func_a() 
{
    cout << "func_a開始" << endl;
    cout << "func_a終了" << endl;
}

void func_b() 
{
    cout << "func_b開始" << endl;
    func_a();
    cout << "func_b終了" << endl;
}

int main()
{
    cout << "main開始" << endl;
    func_b();
    cout << "main終了" << endl;
}
