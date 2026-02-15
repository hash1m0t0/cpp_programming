#include <iostream>

using namespace std;

void countdown(int start, int end)
{
    cout << "1つ目の引数で受け取った値: " << start << endl;
    cout << "2つ目の引数で受け取った値: " << end << endl;
    cout << "カウントダウンをします" << endl;
    for (int i = start; i >= end; i--) {
        cout << i << " ";
    }
    cout << endl;
}

int main()
{
    countdown(7, 3);
}
