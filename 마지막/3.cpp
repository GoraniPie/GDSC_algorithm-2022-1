#include <map>
#include <iostream>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string, int> mymap;
	int n, m, cnt = 0;
	cin >> n >> m;
	string tmp;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		mymap[tmp] = 1;
	}

	for (int i = 0; i < m; i++) {
		cin >> tmp;
		if (mymap[tmp] != 0) {
			cnt++;
		}
	}

	cout << cnt;

}