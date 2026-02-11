#include <iostream>

using namespace std;

int main()
{
    double base;
    double height;

    cout << "三角形の面積を計算します" << endl;
    cout << "底辺の長さを入力してください" << endl;
    cin >> base;
    cout << "高さを入力してください" << endl;
    cin >> height;
    cout << "面積は " << base * height / 2 << " です" << endl;
}
