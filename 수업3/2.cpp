#include <iostream>
#include <vector>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int a, b;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        printf("%d\n", a + b);
    }

}