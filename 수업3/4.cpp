#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<string> mylist = {"dog", "cat", "parrot"};
    for (int i = 0; i < 3; i++) {
        printf("%s\n", mylist[i][0]);
    }

}