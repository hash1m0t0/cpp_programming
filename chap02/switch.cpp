#include <iostream>

using namespace std;

int main()
{
    int score = 3;
    switch (score) {
    case 1:
        cout << "もっと頑張りましょう" << endl;
        break;
    case 2:
        cout << "もう少し頑張りましょう" << endl;
        break;
    case 3:
        cout << "普通です" << endl;
        break;
    case 4:
        cout << "よくできました" << endl;
        break;
    case 5:
        cout << "大変よくできました" << endl;
        break;
    default:
        cout << "想定されていない点数です" << endl;
        break;
    }
    cout << "switchブロックを抜けました" << endl;
}
