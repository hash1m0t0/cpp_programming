#include <iostream>
#include <string>

using namespace std;

void func() 
{
    cout << "引数はありません" << endl;
}

void func(int i) 
{
    cout << "int型の値" << i << "を受け取りました" << endl;
}

void func(double d) 
{
    cout << "double型の値" << d << "を受け取りました" << endl;
}

void func(string s) 
{
    cout << "string型の値" << s << "を受け取りました" << endl;
}

int main()
{
    func();
    func(1);
    func(0.1);
    func("Hello");
}
