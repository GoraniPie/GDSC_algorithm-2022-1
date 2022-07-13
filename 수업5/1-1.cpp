#include <iostream>
#include <vector>

using namespace std;

unsigned long long factorial(int n);

int main() {

    int n;
    cin >> n;

    cout << factorial(n);

}

unsigned long long factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}