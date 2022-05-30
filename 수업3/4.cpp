#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<string> mylist = { "dog", "cat", "parrot" };
    for (int i = 0; i < 3; i++) {
        cout << mylist[i][0] << "\n";
    }

}