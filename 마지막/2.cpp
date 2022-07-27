#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;

	cin >> n;

	int tmp;
	vector<int> check(500000);

	map<int, int> arr;

	for (int i = 0; i < n; i++) {
		cin >> tmp;
		arr[tmp] = 1;
	}

	cin >> m;

	for (int i = 0; i < m; i++) {
		cin >> check[i];
	}
	
	for (int i = 0; i < m; i++) {
		cout << arr[check[i]] << " ";
	}


}