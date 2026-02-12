#include <iostream>

using namespace std;

int main()
{
    int counts[] = {1, 3, 5, 6, 5, 2};
    for (int i = 0; i < 6; i++) {
        cout << i << ":";
        for (int j = 0; j < counts[i]; j++) {
            cout << "*";
        }
        cout << endl;
    }
}
