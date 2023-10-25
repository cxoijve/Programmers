#include <iostream>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    if (a < -100000 || a > 100000 || b < -100000 || b > 100000) {
        cout << "Values out of range!" << endl;
        return 1;
    }

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}
