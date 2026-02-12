#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    for (int i = 10; i <= 20; i++) {
        sum += i;
    }
    cout << "合計は" << sum << endl;

    sum = 0;
    int i = 10;
    while (i <= 20) {
        sum += i;
        i++;
    }
    cout << "合計は" << sum << endl;
}
