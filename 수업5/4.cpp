#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void aratos(int num, vector<int>& tmp, vector<int>& prime);

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    vector<int> tmp(10000001);
    vector<int> prime(10000001);

    int num;
    cin >> num;

    aratos(num, tmp, prime);
    /*
    for (int i = 0; i < num; i++) {
        cout << prime[i] << '\n';
    }
    */
    int idx = 0;
    while (1) {

        if (num % prime[idx] == 0) {
            cout << prime[idx] << '\n';
            num /= prime[idx];
            continue;
        }
        else {
            idx++;
        }

        if (prime[idx] == 0)
            break;

    }
}

void aratos(int num, vector<int>& tmp, vector<int>& prime) {

    int j = 0;

    for (int i = 2; i <= num; i++) {
        tmp[i] = i;
    }

    for (int i = 2; i <= sqrt(num); i++) {
        if (tmp[i] == 0) {
            continue;
        }
        for (int j = i * i; j <= num; j += i) {
            tmp[j] = 0;
        }
    }

    for (int i = 2; i <= num; i++) {
        if (tmp[i] != 0) {
            prime[j] = tmp[i];
            j++;
        }
    }

}