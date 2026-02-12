#include <iostream>

using namespace std;

int main()
{
    int age = 20;
    if (age < 13 || 65 <= age) {
        cout << "入場料は無料です" << endl;
    } else {
        cout << "料金が必要です" << endl;
    }
}
