#include <iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    short a;
    cin >> a;

    for (short i = 1; i <= a; i++) {
        cout << a << "*" << i << "=" << a * i << "\n";
    }

}