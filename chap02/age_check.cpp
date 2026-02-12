#include <iostream>

using namespace std;

int main()
{
    int age = 20;
    if (age < 4) {
        cout << "入場料は無料です" << endl;
    } else if (age < 13) {
        cout << "子供料金で入場できます" << endl;
    } else {
        cout << "大人料金が必要です" << endl;
    }
}
